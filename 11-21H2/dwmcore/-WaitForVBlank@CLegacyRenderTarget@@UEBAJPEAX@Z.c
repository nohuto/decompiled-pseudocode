/*
 * XREFs of ?WaitForVBlank@CLegacyRenderTarget@@UEBAJPEAX@Z @ 0x1800F5F50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRenderTarget::WaitForVBlank(CLegacyRenderTarget *this, void *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx
  void *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  if ( v2 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, bool, void **))(*(_QWORD *)v2 + 48LL))(v2, a2 != 0LL, &v7);
    if ( (unsigned int)v4 > 1 )
    {
      v3 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, v4, 0x38Eu);
    }
  }
  else
  {
    v3 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0LL, -2003304442, 0x393u);
  }
  return v3;
}
