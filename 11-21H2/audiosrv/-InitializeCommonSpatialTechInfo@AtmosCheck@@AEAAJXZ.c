/*
 * XREFs of ?InitializeCommonSpatialTechInfo@AtmosCheck@@AEAAJXZ @ 0x180057D00
 * Callers:
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x180057E7C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::InitializeCommonSpatialTechInfo(AtmosCheck *this)
{
  unsigned int v2; // ebp
  GUID *v3; // r14
  LPOLESTR *v4; // rdi
  LPOLESTR v5; // r15
  HRESULT v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  char *v9; // rax
  DWORD LastError; // ebx
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_BYTE *)this + 96) )
  {
LABEL_7:
    v8 = 0;
    v9 = (char *)this + 273;
    do
    {
      *(_WORD *)(v9 - 1) = 0;
      ++v8;
      v9 += 48;
    }
    while ( v8 < 7 );
    return 0LL;
  }
  else
  {
    v2 = 0;
    v3 = &AtmosCheck::s_spatialSubtypes;
    v4 = (LPOLESTR *)((char *)this + 296);
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 )
      {
        LastError = GetLastError();
        CoTaskMemFree(v5);
        SetLastError(LastError);
      }
      *v4 = 0LL;
      v6 = StringFromCLSID(&AtmosCheck::s_spatialSubtypes + (int)v2, v4);
      v7 = v6;
      if ( v6 < 0 )
        break;
      *(GUID *)((char *)v4 - 20) = *v3;
      ++v2;
      ++v3;
      v4 += 6;
      if ( v2 >= 7 )
        goto LABEL_7;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC5,
      (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v6,
      v12);
    return v7;
  }
}
