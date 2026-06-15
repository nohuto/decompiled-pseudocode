/*
 * XREFs of ?CreateInstance@PhoneCallEndTimer@@SAJPEAVPhoneCallAudio@@PEAVCComAutoCriticalSection@ATL@@PEAPEAV1@@Z @ 0x180063E60
 * Callers:
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x180063CCC (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ?Free@?$CAutoPtr@VPhoneCallEndTimer@@@ATL@@QEAAXXZ @ 0x180065D30 (-Free@-$CAutoPtr@VPhoneCallEndTimer@@@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall PhoneCallEndTimer::CreateInstance(
        struct PhoneCallAudio *a1,
        struct ATL::CComAutoCriticalSection *a2,
        struct PhoneCallEndTimer **a3)
{
  unsigned int v3; // ebx
  _QWORD *v7; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v9 = 0LL;
  if ( a1 && a2 )
  {
    if ( a3 )
    {
      v7 = operator new(0x28uLL);
      v9 = 0LL;
      if ( v7 )
      {
        v7[2] = 0LL;
        *v7 = &PhoneCallEndTimer::`vftable';
        v7[4] = 0LL;
        v7[1] = a1;
        *((_DWORD *)v7 + 4) = 3000;
        v7[3] = a2;
        *a3 = (struct PhoneCallEndTimer *)v7;
      }
      else
      {
        v3 = -2147024882;
      }
    }
    else
    {
      v3 = -2147467261;
    }
  }
  else
  {
    v3 = -2147024809;
  }
  ATL::CAutoPtr<PhoneCallEndTimer>::Free(&v9);
  return v3;
}
