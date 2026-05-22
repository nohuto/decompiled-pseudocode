/*
 * XREFs of ?Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICursorManager@@@Z @ 0x18018309C
 * Callers:
 *     ?Initialize@SystemCursorService2@@QEAAJK@Z @ 0x1801143A4 (-Initialize@SystemCursorService2@@QEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A98C (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CursorManager@@IEAA@PEAUICursorManagerClient@@KW4CursorManagerClientVersion@@@Z @ 0x180182E74 (--0CursorManager@@IEAA@PEAUICursorManagerClient@@KW4CursorManagerClientVersion@@@Z.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x180183164 (-Initialize@CursorManager@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CursorManager::Create(__int64 a1, __int64 a2, __int64 a3, CursorManager **a4)
{
  unsigned int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rdx
  CursorManager *v9; // rax
  CursorManager *v10; // rbx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CursorManager *v14; // [rsp+48h] [rbp+20h] BYREF

  v14 = 0LL;
  if ( !a4 )
  {
    v6 = -2147024809;
    v7 = 2147942487LL;
    v8 = 116LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)v7);
    Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v14);
    return v6;
  }
  v9 = (CursorManager *)RefCountedObject::operator new(0x60uLL);
  v14 = v9;
  if ( v9 )
    v10 = (CursorManager *)CursorManager::CursorManager((__int64)v9, a1);
  else
    v10 = 0LL;
  v14 = v10;
  if ( !v10 )
  {
    v6 = -2147024882;
    v7 = 2147942414LL;
    v8 = 119LL;
    goto LABEL_10;
  }
  v11 = CursorManager::Initialize(v10);
  v6 = v11;
  if ( v11 < 0 )
  {
    v7 = (unsigned int)v11;
    v8 = 121LL;
    goto LABEL_10;
  }
  *a4 = v10;
  return 0LL;
}
