/*
 * XREFs of ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C00BAA6C
 * Callers:
 *     DrawFrameControl @ 0x1C00BF6FC (DrawFrameControl.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C008ABC0 (GreExtTextOutWInternal.c)
 *     GreSetTextColor @ 0x1C00BE3F8 (GreSetTextColor.c)
 *     GrePolyPatBlt @ 0x1C00C1D4C (GrePolyPatBlt.c)
 */

__int64 __fastcall DrawGrip(HDC a1, struct tagRECT *a2, __int16 a3)
{
  LONG bottom; // esi
  LONG top; // r8d
  LONG right; // edi
  int v7; // r9d
  LONG left; // r10d
  int v10; // edx
  int v11; // eax
  LONG v12; // edi
  LONG v13; // esi
  __int64 v14; // rax
  int v15; // r14d
  unsigned __int16 *v16; // rax
  unsigned __int16 *v17; // rcx
  _DWORD v19[4]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20; // [rsp+60h] [rbp-28h]

  bottom = a2->bottom;
  top = a2->top;
  right = a2->right;
  v7 = bottom - top;
  left = a2->left;
  v10 = right - a2->left;
  v11 = v10;
  if ( v10 >= bottom - top )
    v11 = bottom - top;
  v12 = right - v11;
  v13 = bottom - v11;
  if ( (a3 & 0xC000) != 0 )
    v14 = *(_QWORD *)(gpsi + 4736LL);
  else
    v14 = *(_QWORD *)(gpsi + 4816LL);
  v19[1] = top;
  v19[2] = v10;
  v19[3] = v7;
  v19[0] = left;
  v20 = v14;
  GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v19, 1u);
  GreSetTextColor(a1);
  v15 = a3 & 0x10;
  v16 = L"x";
  if ( !v15 )
    v16 = L"o";
  GreExtTextOutWInternal(a1, v12, v13, 0, 0LL, v16, 1u, 0LL, 0LL, 0);
  GreSetTextColor(a1);
  v17 = L"y";
  if ( (v15 & 0x10) == 0 )
    v17 = L"p";
  GreExtTextOutWInternal(a1, v12, v13, 0, 0LL, v17, 1u, 0LL, 0LL, 0);
  GreSetTextColor(a1);
  return 1LL;
}
