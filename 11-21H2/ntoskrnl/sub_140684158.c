/*
 * XREFs of sub_140684158 @ 0x140684158
 * Callers:
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 *     sub_1406CA8B0 @ 0x1406CA8B0 (sub_1406CA8B0.c)
 *     sub_1406FFA80 @ 0x1406FFA80 (sub_1406FFA80.c)
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 * Callees:
 *     sub_14025863C @ 0x14025863C (sub_14025863C.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140683844 @ 0x140683844 (sub_140683844.c)
 *     sub_140683ED4 @ 0x140683ED4 (sub_140683ED4.c)
 *     sub_140683FE0 @ 0x140683FE0 (sub_140683FE0.c)
 *     sub_14068565C @ 0x14068565C (sub_14068565C.c)
 *     sub_140687598 @ 0x140687598 (sub_140687598.c)
 *     sub_140687754 @ 0x140687754 (sub_140687754.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1407B81B0 @ 0x1407B81B0 (sub_1407B81B0.c)
 *     sub_1407D80A4 @ 0x1407D80A4 (sub_1407D80A4.c)
 *     sub_1407F7E04 @ 0x1407F7E04 (sub_1407F7E04.c)
 *     sub_1409E237C @ 0x1409E237C (sub_1409E237C.c)
 */

void __fastcall sub_140684158(ULONG_PTR BugCheckParameter1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  char v4; // r15
  bool v6; // zf
  unsigned int v7; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  bool v11; // r12
  __int64 v12; // rbx
  int v13; // esi
  _QWORD *v14; // rax
  char v15; // [rsp+20h] [rbp-79h]
  __int64 v16; // [rsp+28h] [rbp-71h] BYREF
  int v17; // [rsp+30h] [rbp-69h]
  __int64 v18; // [rsp+38h] [rbp-61h] BYREF
  struct _KTHREAD *v19; // [rsp+40h] [rbp-59h]
  __int64 v20[20]; // [rsp+50h] [rbp-49h] BYREF
  char v21; // [rsp+110h] [rbp+77h]

  v21 = a3;
  v4 = 0;
  v6 = (*(_DWORD *)(BugCheckParameter1 + 2172) & 0x1000) == 0;
  v7 = a3;
  v18 = 0LL;
  v16 = 0LL;
  if ( v6 || (a3 & 1) != 0 )
  {
    memset(v20, 0, 0x68uLL);
    CurrentThread = KeGetCurrentThread();
    v19 = CurrentThread;
    v11 = !_interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 1120), 0);
    v15 = 0;
    if ( (v7 & 2) != 0
      && (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x4000000) != 0
      && (*(_BYTE *)(BugCheckParameter1 + 2172) & 0x40) == 0 )
    {
      sub_1407D80A4(BugCheckParameter1, a4);
      v15 = 1;
    }
    v17 = 1;
    sub_140687598(BugCheckParameter1, CurrentThread, &v18, &v16);
    if ( (xmmword_140D06900 & 0x80000) != 0 )
      sub_1409E237C(BugCheckParameter1, v7, a4);
    if ( (v7 & 4) != 0 && !_interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 1120), 1u) )
    {
      _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter1 + 1120), 0xFFFFFFDF);
      sub_1407B81B0(BugCheckParameter1, v20);
      v4 = 1;
    }
    v12 = v18;
    if ( v18 )
    {
      v13 = v17;
      do
      {
        sub_14068565C(v12, &v16);
        if ( v11 )
        {
          --*(_DWORD *)(v12 + 216);
          if ( (*(_DWORD *)(BugCheckParameter1 + 2172) & 0x20) != 0 )
            --*(_DWORD *)(v12 + 1420);
        }
        if ( (v7 & 8) != 0 && v11 )
          ++*(_DWORD *)(v12 + 220);
        if ( a2 && (!*a2 || *a2 == v12) && *(_QWORD *)(v12 + 552) && ((1 << a2[1]) & *(_DWORD *)(v12 + 1068)) != 0 )
          sub_14025863C(v12, a2[1], a2[2], 0);
        if ( v4 )
        {
          sub_140683FE0(v12, BugCheckParameter1, v20);
          if ( v12 == *(_QWORD *)(BugCheckParameter1 + 1296) && *(_DWORD *)(v12 + 1424) != dword_140D3B110 )
          {
            v13 = 0;
          }
          else if ( v13 == 1 )
          {
            v14 = (_QWORD *)(v12 + 1312);
            if ( v12 + 1312 < (unsigned __int64)(v12 + 1416) )
            {
              while ( !*v14 )
              {
                if ( (unsigned __int64)++v14 >= v12 + 1416 )
                  goto LABEL_14;
              }
              sub_1407F7E04(v12 + 1312, v20);
              v13 = 2;
            }
          }
        }
LABEL_14:
        if ( v12 != v16 )
          ExReleaseResourceLite((PERESOURCE)(v12 + 56));
        v12 = *(_QWORD *)(v12 + 1264);
      }
      while ( v12 );
      v12 = v18;
      CurrentThread = v19;
      LOBYTE(v7) = v21;
    }
    sub_14068565C(v12, &v16);
    if ( (v7 & 1) != 0 )
    {
      sub_140683ED4(v12, BugCheckParameter1);
      if ( v12 != v16 )
        ExReleaseResourceLite((PERESOURCE)(v12 + 56));
      sub_1406FFE90(v16, CurrentThread);
    }
    else
    {
      if ( v11 && (*(_DWORD *)(BugCheckParameter1 + 1120) & 4) != 0 && !v15 )
        sub_140683844(BugCheckParameter1, 0, 0);
      if ( v12 != v16 )
        ExReleaseResourceLite((PERESOURCE)(v12 + 56));
      sub_1406FFE90(v16, CurrentThread);
      --*((_WORD *)CurrentThread + 242);
      sub_140687754(BugCheckParameter1);
      sub_1402AC800((__int64)CurrentThread);
    }
  }
}
