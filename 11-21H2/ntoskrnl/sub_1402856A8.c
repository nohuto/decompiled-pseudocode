/*
 * XREFs of sub_1402856A8 @ 0x1402856A8
 * Callers:
 *     sub_1402853B0 @ 0x1402853B0 (sub_1402853B0.c)
 *     sub_1402858A0 @ 0x1402858A0 (sub_1402858A0.c)
 *     sub_1403D1490 @ 0x1403D1490 (sub_1403D1490.c)
 *     sub_14053B55C @ 0x14053B55C (sub_14053B55C.c)
 *     sub_14053E3AC @ 0x14053E3AC (sub_14053E3AC.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall sub_1402856A8(__int64 a1, _QWORD *a2, char a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  unsigned __int64 *v7; // r8
  __int64 v8; // r9

  --dword_140C4E880;
  result = (unsigned __int64)(a2 + 2);
  if ( a3 )
  {
    v7 = (unsigned __int64 *)(a1 + 1168);
    v8 = *(_QWORD *)(a1 + 1168);
    if ( *(_QWORD *)(v8 + 8) == a1 + 1168 )
    {
      *(_QWORD *)result = v8;
      a2[3] = v7;
      *(_QWORD *)(v8 + 8) = result;
      *v7 = result;
      a2[1] = 0LL;
      ++*(_DWORD *)(a1 + 1184);
      return result;
    }
LABEL_7:
    __fastfail(3u);
  }
  v4 = qword_140C49AD0;
  if ( *(__int64 **)(qword_140C49AD0 + 8) != &qword_140C49AD0 )
    goto LABEL_7;
  *(_QWORD *)result = qword_140C49AD0;
  a2[3] = &qword_140C49AD0;
  *(_QWORD *)(v4 + 8) = result;
  qword_140C49AD0 = (__int64)(a2 + 2);
  v5 = a2[4];
  a2[1] = 0LL;
  v6 = *(_DWORD *)(v5 + 4);
  if ( !v6 )
    KeBugCheckEx(0x34u, 0x16EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  result = (unsigned int)(v6 - 1);
  *(_DWORD *)(v5 + 4) = result;
  ++dword_140C49AB8;
  return result;
}
