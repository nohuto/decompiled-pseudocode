/*
 * XREFs of ?AllocateStub@BamoCompObjectDiagnosticsRootPrincipal@@MEAAJPEAVBamoPeer@dcompwinrtnestedg_AutoBamos@@PEAPEAVBamoCompObjectDiagnosticsRootStub@@@Z @ 0x18019E960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 */

__int64 __fastcall BamoCompObjectDiagnosticsRootPrincipal::AllocateStub(
        BamoCompObjectDiagnosticsRootPrincipal *this,
        struct dcompwinrtnestedg_AutoBamos::BamoPeer *a2,
        struct BamoCompObjectDiagnosticsRootStub **a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = operator new(0x50uLL);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x50uLL);
    *v5 = &BamoCompObjectDiagnosticsRootStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
    v5[1] = &BamoCompObjectDiagnosticsRootStub::`vftable'{for `ICompObjectDiagnosticsRootStub'};
    v5[6] = 0LL;
    *((_DWORD *)v5 + 8) = 0;
    v5[5] = 0LL;
    v5[7] = 0LL;
    v5[8] = 0LL;
    *((_WORD *)v5 + 38) = 0;
    v5[2] = &BamoImpl::BamoCompObjectDiagnosticsRootStubImpl::`vftable';
    result = 0LL;
    *((_DWORD *)v5 + 6) = 1;
    *((_DWORD *)v5 + 18) = 256;
    *a3 = (struct BamoCompObjectDiagnosticsRootStub *)v5;
  }
  else
  {
    *a3 = 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD50,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\objfre\\amd64\\dcompwinrtnestedg.bamo.h",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
