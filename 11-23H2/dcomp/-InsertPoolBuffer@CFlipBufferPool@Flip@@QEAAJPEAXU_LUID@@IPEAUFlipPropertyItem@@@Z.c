/*
 * XREFs of ?InsertPoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAXU_LUID@@IPEAUFlipPropertyItem@@@Z @ 0x1801AC5FC
 * Callers:
 *     ?AddBufferToPool@CFlipProducer@Flip@@UEAAJIPEAUFlipPropertyItem@@PEAXU_LUID@@@Z @ 0x1801AA2D0 (-AddBufferToPool@CFlipProducer@Flip@@UEAAJIPEAUFlipPropertyItem@@PEAXU_LUID@@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RemoveAt@?$DynArray@UDwmAnimationTimeEventData@@$0A@@@QEAAJI@Z @ 0x1800E9094 (-RemoveAt@-$DynArray@UDwmAnimationTimeEventData@@$0A@@@QEAAJI@Z.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall Flip::CFlipBufferPool::InsertPoolBuffer(
        Flip::CFlipBufferPool *this,
        void *a2,
        struct _LUID a3,
        int a4,
        struct FlipPropertyItem *a5)
{
  _QWORD *v5; // r14
  __int64 *v6; // rsi
  unsigned int v8; // eax
  __int64 v11; // r8
  int v12; // ebx
  unsigned int v13; // edx
  unsigned int v14; // edi
  int v15; // eax
  int v16; // eax
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  struct _LUID v19; // [rsp+80h] [rbp+18h] BYREF

  v19 = a3;
  v5 = (_QWORD *)((char *)this + 40);
  *(_QWORD *)&v18 = a2;
  v6 = (__int64 *)((char *)this + 8);
  *((_QWORD *)&v18 + 1) = *((_QWORD *)this + 5);
  v8 = *((_DWORD *)this + 8);
  v11 = v8 + 1;
  if ( (unsigned int)v11 < v8 )
  {
    v12 = -2147024362;
    v13 = 181;
    v14 = -2147024362;
LABEL_9:
    DoStackCaptureDirect(v12, v13);
    DoStackCaptureDirect(v12, 0x18u);
    return v14;
  }
  if ( (unsigned int)v11 > *((_DWORD *)this + 7) )
  {
    v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 8, 0x10u, v11, &v18);
    v14 = v12;
    if ( v12 < 0 )
    {
      v13 = 192;
      goto LABEL_9;
    }
  }
  else
  {
    *(_OWORD *)(*v6 + 16LL * *((unsigned int *)this + 8)) = v18;
    *((_DWORD *)this + 8) = v11;
  }
  v15 = NtFlipObjectAddPoolBuffer(*(_QWORD *)(*(_QWORD *)this + 24LL), v5, a2, &v19, a4, a5);
  v16 = HRESULTFromNTSTATUS(v15);
  v14 = v16;
  if ( v16 < 0 )
  {
    DoStackCaptureDirect(v16, 0x25u);
    DynArray<DwmAnimationTimeEventData,0>::RemoveAt(v6, *((_DWORD *)this + 8) - 1);
  }
  else
  {
    ++*v5;
  }
  return v14;
}
