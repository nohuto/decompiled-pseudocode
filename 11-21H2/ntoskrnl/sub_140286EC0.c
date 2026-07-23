/*
 * XREFs of sub_140286EC0 @ 0x140286EC0
 * Callers:
 *     sub_14022CD50 @ 0x14022CD50 (sub_14022CD50.c)
 *     sub_140251340 @ 0x140251340 (sub_140251340.c)
 *     sub_14026E564 @ 0x14026E564 (sub_14026E564.c)
 *     sub_140270274 @ 0x140270274 (sub_140270274.c)
 *     sub_14027F360 @ 0x14027F360 (sub_14027F360.c)
 *     sub_140286D4C @ 0x140286D4C (sub_140286D4C.c)
 *     sub_140286DE0 @ 0x140286DE0 (sub_140286DE0.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_1406A3A68 @ 0x1406A3A68 (sub_1406A3A68.c)
 * Callees:
 *     sub_14022CF78 @ 0x14022CF78 (sub_14022CF78.c)
 *     sub_140287428 @ 0x140287428 (sub_140287428.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405C4C6C @ 0x1405C4C6C (sub_1405C4C6C.c)
 */

__int64 __fastcall sub_140286EC0(_QWORD *BugCheckParameter2, char a2)
{
  __int64 v2; // r9
  ULONG_PTR v3; // r10
  unsigned int v4; // r11d
  __int16 v7; // r8
  ULONG_PTR *v8; // rax
  __int64 v9; // rax
  int v10; // edx
  char v11; // r8

  v2 = *BugCheckParameter2;
  v3 = (ULONG_PTR)BugCheckParameter2;
  v4 = 2;
  if ( (a2 & 8) != 0 && !(unsigned int)sub_140287428(*BugCheckParameter2) )
  {
    if ( (v7 & 0x80u) != 0 )
    {
      v8 = &StartContext;
    }
    else if ( (v7 & 0x100) != 0 )
    {
      v8 = *(ULONG_PTR **)(qword_140C51F48
                         + 8LL
                         * *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 366LL));
    }
    else
    {
      v8 = (v7 & 0x10) != 0
         ? 0LL
         : *(ULONG_PTR **)(qword_140C51F48 + 8LL
                                           * *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1838LL));
    }
    if ( v8 != *(ULONG_PTR **)(qword_140C51F48 + 8LL * (*(_WORD *)(v2 + 60) & 0x3FF)) )
    {
      if ( (((v7 & 0x200) == 0) & *(_BYTE *)(v2 + 62)) != 0 )
      {
        ++dword_140C52950;
        return 0LL;
      }
      v9 = sub_14022CF78(v3);
      v10 = *(_DWORD *)(sub_14022CF78(v9) + 48) & 0x3FFFFFFF;
      if ( v10 != 0x3FFFFFFF )
      {
        if ( !v10 && (v11 & 0x20) == 0 )
          return 1LL;
        sub_1405C4C6C(v3, (unsigned int)(v10 + 1));
      }
    }
  }
  if ( (*(_DWORD *)(v2 + 56) & 0x20) == 0
    && *(_QWORD *)(v2 + 64)
    && (*(_BYTE *)(v3 + 34) & 1) == 0
    && (*(_QWORD *)(v3 + 96))++ == -1LL )
  {
    KeBugCheckEx(0x1Au, 0x42000uLL, v3, 0LL, 0LL);
  }
  return v4;
}
