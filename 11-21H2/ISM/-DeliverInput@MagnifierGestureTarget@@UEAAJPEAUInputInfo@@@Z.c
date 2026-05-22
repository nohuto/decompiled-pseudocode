/*
 * XREFs of ?DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1801B09D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18004C898 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?PanGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@6@@Z @ 0x18014DEF0 (-PanGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Win.c)
 *     ?ZoomGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@6@@Z @ 0x18014E890 (-ZoomGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Wi.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1801AF87C (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?AveragePoint@@YA?AUPoint@Foundation@Windows@@PEBUInputInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x1801B08A0 (-AveragePoint@@YA-AUPoint@Foundation@Windows@@PEBUInputInfo@@V-$ComPtr@VInputSite@@@WRL@Microsof.c)
 *     ?SendPan@Magnifier@InputTraceLogging@@SAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@7@@Z @ 0x1801B0DB4 (-SendPan@Magnifier@InputTraceLogging@@SAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEB.c)
 *     ?SendZoom@Magnifier@InputTraceLogging@@SAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@7@@Z @ 0x1801B0EDC (-SendZoom@Magnifier@InputTraceLogging@@SAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAE.c)
 */

__int64 __fastcall MagnifierGestureTarget::DeliverInput(MagnifierGestureTarget *this, struct InputInfo *a2)
{
  int v4; // edi
  char *v5; // rsi
  int v6; // ebp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rcx
  int v14; // eax
  _BOOL8 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  bool v19; // zf
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 result; // rax
  const char *v23; // [rsp+28h] [rbp-30h]
  const char *v24; // [rsp+28h] [rbp-30h]
  _QWORD v25[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF

  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x5F,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\magnifiertarget.cpp",
    (const char *)(*((_DWORD *)this + 10) == 2),
    (__int64)"Shouldn't deliver input after completed",
    v23);
  v4 = 0;
  v5 = (char *)a2 + 320;
  v6 = 0;
  gsl::details::extent_type<-1>::extent_type<-1>(v25, *((unsigned int *)a2 + 79), v7, v8);
  if ( v25[0] == -1LL || a2 == (struct InputInfo *)-320LL && v25[0] )
  {
    _o_terminate(v10, v9, v11, v12);
    __debugbreak();
    JUMPOUT(0x1801B0B5BLL);
  }
  v13 = &v5[144 * v25[0]];
  while ( v5 != v13 )
  {
    v14 = v6 + 1;
    if ( (v5[12] & 4) == 0 )
      v14 = v6;
    v5 += 144;
    v6 = v14;
  }
  if ( v6 )
  {
    LOBYTE(v4) = *((_BYTE *)this + 36) != 0;
    *((_DWORD *)this + 10) = v4;
  }
  else
  {
    v15 = *((_BYTE *)this + 36) == 0;
    *((_DWORD *)this + 10) = 2;
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x6E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\magnifiertarget.cpp",
      (const char *)v15,
      (__int64)"First delivered input shouldn't be completed",
      v24);
  }
  v27 = *((_QWORD *)this + 3);
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v27);
  v18 = AveragePoint((__int64)a2, &v27, v16, v17);
  v19 = *((_DWORD *)this + 8) == 1;
  v20 = *((unsigned int *)a2 + 79);
  v21 = *((unsigned int *)this + 10);
  v27 = v18;
  if ( v19 )
  {
    InputTraceLogging::Magnifier::SendZoom(v21, v20, &v27);
    MagnifierControllerProxy::ZoomGestureDetected(
      *((_QWORD *)this + 2) + 8LL,
      *((_DWORD *)this + 10),
      *((unsigned int *)a2 + 79),
      (const struct Windows::Foundation::Point *)&v27);
  }
  else
  {
    InputTraceLogging::Magnifier::SendPan(v21, v20, &v27);
    MagnifierControllerProxy::PanGestureDetected(
      *((_QWORD *)this + 2) + 8LL,
      *((_DWORD *)this + 10),
      *((unsigned int *)a2 + 79),
      (const struct Windows::Foundation::Point *)&v27);
  }
  result = 0LL;
  *((_BYTE *)this + 36) = 1;
  return result;
}
