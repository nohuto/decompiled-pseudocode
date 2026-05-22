/*
 * XREFs of ?Present@CSynchronizationContext@Flip@@QEAAJPEAUIUnknown@@_KPEAX@Z @ 0x1801AC3E4
 * Callers:
 *     ?Present@CFlipProducer@Flip@@UEAAJPEAUIUnknown@@_KPEA_K_NIPEAUFlipPropertyItem@@2@Z @ 0x1801AA7C0 (-Present@CFlipProducer@Flip@@UEAAJPEAUIUnknown@@_KPEA_K_NIPEAUFlipPropertyItem@@2@Z.c)
 *     ?ReturnPoolBuffer@CFlipConsumer@Flip@@UEAAJPEAUIUnknown@@_K0@Z @ 0x1801ABDB0 (-ReturnPoolBuffer@CFlipConsumer@Flip@@UEAAJPEAUIUnknown@@_K0@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Flip::CSynchronizationContext::Present(
        Flip::CSynchronizationContext *this,
        struct IUnknown *a2,
        __int64 a3,
        void *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-68h] BYREF
  void *v14; // [rsp+38h] [rbp-60h] BYREF
  GUID v15; // [rsp+40h] [rbp-58h] BYREF
  __int64 v16; // [rsp+50h] [rbp-48h]
  void **v17; // [rsp+58h] [rbp-40h]

  v13 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80,
         &v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 60;
  }
  else
  {
    v9 = *((_QWORD *)this + 1);
    v14 = a4;
    v15 = GUID_50c8fad0_1317_4931_bb75_1e8958fa485c;
    v16 = 8LL;
    v17 = &v14;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, GUID *))(*(_QWORD *)v9 + 56LL))(
           v9,
           v13,
           a3,
           1LL,
           &v15);
    v8 = v7;
    if ( v7 >= 0 )
      goto LABEL_6;
    v10 = 54;
  }
  DoStackCaptureDirect(v7, v10);
LABEL_6:
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v8;
}
