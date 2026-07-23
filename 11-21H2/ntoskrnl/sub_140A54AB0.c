/*
 * XREFs of sub_140A54AB0 @ 0x140A54AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403B822C @ 0x1403B822C (sub_1403B822C.c)
 *     sub_140A536C8 @ 0x140A536C8 (sub_140A536C8.c)
 *     sub_140AF3260 @ 0x140AF3260 (sub_140AF3260.c)
 *     sub_140AF6E6C @ 0x140AF6E6C (sub_140AF6E6C.c)
 */

__int64 __fastcall sub_140A54AB0(int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  switch ( a1 )
  {
    case 19:
      goto LABEL_9;
    case 2:
      dword_140C54BA0 = *(_DWORD *)(*(_QWORD *)(a3 + 240) + 3488LL);
      return v3;
    case 7:
      sub_140AF3260();
      return v3;
    case 17:
      qword_140C4A1A8 = (__int64)&qword_140C4A1A0;
      qword_140C4A1A0 = (__int64)&qword_140C4A1A0;
      sub_1403B822C();
LABEL_9:
      sub_140A536C8();
      return v3;
    case 27:
      return (unsigned int)sub_140AF6E6C();
  }
  return v3;
}
