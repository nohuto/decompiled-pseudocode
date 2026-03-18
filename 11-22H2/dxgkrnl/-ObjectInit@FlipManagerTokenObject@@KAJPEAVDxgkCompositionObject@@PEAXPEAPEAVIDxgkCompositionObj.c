/*
 * XREFs of ?ObjectInit@FlipManagerTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C0076D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFlipManagerToken@@IEAAJAEAUFlipManagerTokenInitInfo@@@Z @ 0x1C0076E84 (-Initialize@CFlipManagerToken@@IEAAJAEAUFlipManagerTokenInitInfo@@@Z.c)
 */

__int64 __fastcall FlipManagerTokenObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        struct FlipManagerTokenInitInfo *a2,
        struct IDxgkCompositionObject **a3)
{
  char *v3; // rcx

  v3 = (char *)a1 + 32;
  if ( v3 )
  {
    *((_QWORD *)v3 + 4) = 6LL;
    *(_QWORD *)v3 = &CFlipManagerToken::`vftable'{for `IDxgkCompositionObject'};
    *((_QWORD *)v3 + 1) = &CFlipManagerToken::`vftable'{for `CTokenBase'};
    *((_QWORD *)v3 + 5) = 0LL;
    *((_QWORD *)v3 + 6) = 0LL;
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 8) = 0LL;
    *((_QWORD *)v3 + 9) = 0LL;
    *((_QWORD *)v3 + 10) = 0LL;
    *((_QWORD *)v3 + 11) = 0LL;
    *((_QWORD *)v3 + 12) = 0LL;
    v3[104] = 0;
    *((_WORD *)v3 + 53) = 0;
  }
  *a3 = (struct IDxgkCompositionObject *)v3;
  return CFlipManagerToken::Initialize((CFlipManagerToken *)v3, a2);
}
