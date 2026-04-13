/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VMobilityExperienceManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800C1450
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyTo@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18006F398 (-CopyTo@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VMobilityExperienceManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800C12FC (--$MakeAndInitialize@VMobilityExperienceManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEA.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<MobilityExperienceManager,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v4; // ebx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    v4 = -2147221232;
    RoOriginateError(2147746064LL, 0LL);
  }
  else
  {
    v6 = 0LL;
    v4 = Microsoft::WRL::Details::MakeAndInitialize<MobilityExperienceManager,IUnknown,>(&v6);
    if ( v4 >= 0 )
      v4 = Microsoft::WRL::ComPtr<IUnknown>::CopyTo(&v6);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  }
  return (unsigned int)v4;
}
