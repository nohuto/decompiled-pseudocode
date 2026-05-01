/*
 * XREFs of ??0CImmersiveWindowCollection@CImmersiveApp@@QEAA@PEAV1@@Z @ 0x180029460
 * Callers:
 *     ??0CImmersiveApp@@QEAA@XZ @ 0x1800291CC (--0CImmersiveApp@@QEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

LPRECT __fastcall CImmersiveApp::CImmersiveWindowCollection::CImmersiveWindowCollection(
        LPRECT lprcDst,
        struct CImmersiveApp *a2)
{
  LPRECT v2; // rbx
  LPRECT result; // rax

  v2 = lprcDst + 1;
  SetRectEmpty(lprcDst + 1);
  v2->left = 1;
  CopyRect(lprcDst, v2);
  *(_QWORD *)&lprcDst[4].left = 3LL;
  *(_QWORD *)&lprcDst[2].top = 0LL;
  *(_QWORD *)&lprcDst[2].bottom = 0LL;
  lprcDst[2].left = -1;
  lprcDst[4].bottom = -1;
  *(_QWORD *)&lprcDst[3].top = 0LL;
  lprcDst[3].bottom = 0;
  lprcDst[4].right = 0;
  *(_QWORD *)&lprcDst[5].left = 0LL;
  *(_QWORD *)&lprcDst[5].right = 0LL;
  *(_QWORD *)&lprcDst[6].left = 0LL;
  lprcDst[6].right = 0;
  *(_QWORD *)&lprcDst[6].bottom = 3LL;
  *(_QWORD *)&lprcDst[7].top = 0LL;
  *(_QWORD *)&lprcDst[8].left = 0LL;
  *(_QWORD *)&lprcDst[8].right = 0LL;
  *(_QWORD *)&lprcDst[9].right = 0LL;
  *(_QWORD *)&lprcDst[10].left = a2;
  *(_QWORD *)&lprcDst[10].right = 0LL;
  *(_QWORD *)&lprcDst[11].left = 0LL;
  *(_QWORD *)&lprcDst[11].right = 0LL;
  *(_QWORD *)&lprcDst[12].left = 0LL;
  LOWORD(lprcDst[12].right) = 0;
  BYTE2(lprcDst[12].right) = 0;
  *(_QWORD *)&lprcDst[12].bottom = 0LL;
  lprcDst[13].top = 0;
  if ( &lprcDst[13].right <= &lprcDst[15].right )
    memset_0(&lprcDst[13].right, 0, 8LL * (&lprcDst[15].right >= &lprcDst[13].right ? 4 : 0));
  *(_QWORD *)&lprcDst[15].right = 0LL;
  result = lprcDst;
  *(_QWORD *)&lprcDst[16].left = 0LL;
  *(_QWORD *)&lprcDst[16].right = 0LL;
  *(_QWORD *)&lprcDst[17].left = 0LL;
  *(_QWORD *)&lprcDst[17].right = 0LL;
  return result;
}
