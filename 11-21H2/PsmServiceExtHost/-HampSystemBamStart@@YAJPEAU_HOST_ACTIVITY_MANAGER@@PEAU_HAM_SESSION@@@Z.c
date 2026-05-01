/*
 * XREFs of ?HampSystemBamStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_SESSION@@@Z @ 0x18004536C
 * Callers:
 *     ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x1800452D8 (-HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VCBackgroundAccessStateChangedListener@@UIBackgroundAccessStateChangeHandler@@AEAPEAU_HOST_ACTIVITY_MANAGER@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIBackgroundAccessStateChangeHandler@@AEAPEAU_HOST_ACTIVITY_MANAGER@@AEAK@Z @ 0x1800454A8 (--$MakeAndInitialize@VCBackgroundAccessStateChangedListener@@UIBackgroundAccessStateChangeHandle.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall HampSystemBamStart(struct _HOST_ACTIVITY_MANAGER *a1, struct _HAM_SESSION *a2)
{
  unsigned int v2; // ebx
  HRESULT ClassObject; // edi
  __int64 v6; // [rsp+30h] [rbp-10h] BYREF
  struct _HOST_ACTIVITY_MANAGER *v7; // [rsp+70h] [rbp+30h] BYREF
  __int64 v8; // [rsp+80h] [rbp+40h] BYREF
  LPVOID ppv; // [rsp+88h] [rbp+48h] BYREF

  v7 = a1;
  v2 = 0;
  ppv = 0LL;
  v8 = 0LL;
  if ( (unsigned __int8)RtlIsMultiSessionSku() && !*((_DWORD *)a2 + 22) )
    goto LABEL_8;
  ClassObject = CoGetClassObject(
                  &GUID_38142214_ed63_4965_9214_1bbc06e130e9,
                  1u,
                  0LL,
                  &GUID_8e1bbbb9_b3d5_430d_b276_d0e7454caab2,
                  &ppv);
  if ( ClassObject >= 0 )
  {
    ClassObject = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL))(
                    ppv,
                    *((unsigned int *)a2 + 22),
                    0LL,
                    &GUID_428d4ddd_3462_43df_9395_1eff13ae7a4b,
                    &v8);
    if ( ClassObject >= 0 )
    {
      ClassObject = Microsoft::WRL::Details::MakeAndInitialize<CBackgroundAccessStateChangedListener,IBackgroundAccessStateChangeHandler,_HOST_ACTIVITY_MANAGER * &,unsigned long &>(
                      &v6,
                      &v7,
                      (char *)a2 + 88);
      if ( ClassObject >= 0 )
      {
        ClassObject = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v8 + 152LL))(
                        v8,
                        v6,
                        (char *)a2 + 128);
        if ( ClassObject >= 0 )
        {
          *((_QWORD *)a2 + 14) = v8;
          *((_QWORD *)a2 + 15) = v6;
LABEL_8:
          ClassObject = 0;
        }
      }
    }
  }
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( ClassObject < 0 )
    return ClassObject | 0xC0000000;
  return v2;
}
