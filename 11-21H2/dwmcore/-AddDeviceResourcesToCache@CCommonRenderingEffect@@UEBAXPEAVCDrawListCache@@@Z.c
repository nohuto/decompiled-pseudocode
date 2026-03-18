/*
 * XREFs of ?AddDeviceResourcesToCache@CCommonRenderingEffect@@UEBAXPEAVCDrawListCache@@@Z @ 0x1800AF9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDeviceResource@CDrawListCache@@QEAAXPEAVIDeviceResource@@@Z @ 0x1800AFBC0 (-AddDeviceResource@CDrawListCache@@QEAAXPEAVIDeviceResource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCommonRenderingEffect::AddDeviceResourcesToCache(
        CCommonRenderingEffect *this,
        struct CDrawListCache *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r8
  void (__fastcall ***v6)(_QWORD, GUID *, struct IDeviceResource **); // rcx
  char *v7; // rcx
  struct IDeviceResource *v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_QWORD *)((char *)this + 16);
  v4 = 2LL;
  do
  {
    v5 = v3[1];
    if ( v5 )
    {
      if ( !*v3 )
      {
        v8 = 0LL;
        v6 = (void (__fastcall ***)(_QWORD, GUID *, struct IDeviceResource **))(v5
                                                                              + 8
                                                                              + *(int *)(*(_QWORD *)(v5 + 8) + 4LL));
        (**v6)(v6, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v8);
        if ( v8 )
        {
          CDrawListCache::AddDeviceResource(a2, v8);
          if ( v8 )
          {
            v7 = (char *)v8 + *(int *)(*((_QWORD *)v8 + 1) + 4LL) + 8;
            (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))(v7);
          }
        }
      }
    }
    v3 += 3;
    --v4;
  }
  while ( v4 );
}
