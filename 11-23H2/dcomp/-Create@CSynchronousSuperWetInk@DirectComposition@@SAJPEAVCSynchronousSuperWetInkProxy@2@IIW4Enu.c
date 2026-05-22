/*
 * XREFs of ?Create@CSynchronousSuperWetInk@DirectComposition@@SAJPEAVCSynchronousSuperWetInkProxy@2@IIW4Enum@SynchronousSuperWetLookupMode@@PEAPEAV12@@Z @ 0x1800FC3CC
 * Callers:
 *     ?CreateSynchronousSuperWetInk@CDevice@DirectComposition@@QEAAJW4Enum@SynchronousSuperWetLookupMode@@IIPEAPEAVCSynchronousSuperWetInk@2@@Z @ 0x1800F0D7C (-CreateSynchronousSuperWetInk@CDevice@DirectComposition@@QEAAJW4Enum@SynchronousSuperWetLookupMo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??1?$ComPtr@VCSynchronousSuperWetInk@DirectComposition@@@WRL@Microsoft@@QEAA@XZ @ 0x1800E6558 (--1-$ComPtr@VCSynchronousSuperWetInk@DirectComposition@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Initialize@CSynchronousSuperWetInk@DirectComposition@@AEAAJII@Z @ 0x1800FC9B8 (-Initialize@CSynchronousSuperWetInk@DirectComposition@@AEAAJII@Z.c)
 */

__int64 __fastcall DirectComposition::CSynchronousSuperWetInk::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        DirectComposition::CSynchronousSuperWetInk **a5)
{
  char *v7; // rax
  DirectComposition::CSynchronousSuperWetInk *v8; // rbx
  unsigned int v9; // edx
  unsigned int v10; // r8d
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // r9
  __int64 v14; // rdx
  DirectComposition::CDelayedDestructionObject *v16; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = (char *)DefaultHeap::Alloc(0x58uLL);
  v8 = (DirectComposition::CSynchronousSuperWetInk *)v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 0;
    *(_QWORD *)v7 = &DirectComposition::CSynchronousSuperWetInk::`vftable';
    *((_QWORD *)v7 + 2) = a1;
    if ( a1 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    *((_QWORD *)v7 + 3) = 0LL;
    *((_QWORD *)v7 + 4) = 0LL;
    *((_QWORD *)v7 + 5) = 0LL;
    *((_QWORD *)v7 + 6) = 0LL;
    *((_QWORD *)v7 + 7) = 0LL;
    *((_QWORD *)v7 + 8) = 0LL;
    *((_QWORD *)v7 + 9) = 0LL;
    *((_DWORD *)v7 + 21) = 0;
    *((_DWORD *)v7 + 20) = a4;
    v16 = (DirectComposition::CDelayedDestructionObject *)v7;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v7 + 8));
    v11 = DirectComposition::CSynchronousSuperWetInk::Initialize(v8, v9, v10);
    v12 = v11;
    if ( v11 >= 0 )
    {
      *a5 = v8;
      return 0LL;
    }
    v13 = (unsigned int)v11;
    v14 = 34LL;
  }
  else
  {
    v16 = 0LL;
    v12 = -2147024882;
    v13 = 2147942414LL;
    v14 = 30LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\synchronoussuperwetink.cpp",
    (const char *)v13);
  Microsoft::WRL::ComPtr<DirectComposition::CSynchronousSuperWetInk>::~ComPtr<DirectComposition::CSynchronousSuperWetInk>(&v16);
  return v12;
}
