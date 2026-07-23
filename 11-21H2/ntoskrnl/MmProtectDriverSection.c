/*
 * XREFs of MmProtectDriverSection @ 0x14025D5E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     sub_1402D94D8 @ 0x1402D94D8 (sub_1402D94D8.c)
 *     sub_1402D96AC @ 0x1402D96AC (sub_1402D96AC.c)
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     sub_14033EF50 @ 0x14033EF50 (sub_14033EF50.c)
 *     sub_14033F41C @ 0x14033F41C (sub_14033F41C.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_140760B20 @ 0x140760B20 (sub_140760B20.c)
 */

__int64 __fastcall MmProtectDriverSection(ULONG_PTR BugCheckParameter2, __int64 a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  PVOID v13; // rsi
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r15
  PVOID v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v24; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h]
  __int64 v26; // [rsp+50h] [rbp-B0h]
  ULONG Size; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h]
  _QWORD v30[22]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v31[14]; // [rsp+120h] [rbp+20h] BYREF

  v6 = 0;
  v23 = 0LL;
  v28 = 0LL;
  memset(v30, 0, sizeof(v30));
  Size = 0;
  v24 = 0LL;
  v25 = 0LL;
  LODWORD(v26) = 0;
  if ( (dword_140D06880 & 0x4000) == 0 )
    return 3221225860LL;
  if ( (a3 & 0xFFFFFFFE) == 0 && !a2 )
  {
    v29 = sub_1406F5B50();
    v8 = sub_1402FDA80(BugCheckParameter2, 1LL);
    v12 = v8;
    if ( !v8 )
      KeBugCheckEx(0x1Au, 0x1100uLL, BugCheckParameter2, 0LL, 0LL);
    v13 = *(PVOID *)(v8 + 48);
    if ( (unsigned int)sub_14027B080(v13, v9, v10, v11) != 1
      && !(unsigned int)sub_1402FDD20(v13)
      && v13 != qword_140D068F0
      && v13 != qword_140D06988 )
    {
      if ( (*(_DWORD *)(v12 + 104) & 0x80000) != 0 )
      {
        v6 = -1073741757;
LABEL_30:
        sub_1406F5AF0(v29);
        return v6;
      }
      sub_140760B20(v12, 0, 64, BugCheckParameter2, (__int64)&v23, (__int64)&v28);
      if ( !v23 )
      {
        v6 = -1073741503;
        goto LABEL_30;
      }
      v14 = (v28 << 25 >> 16) + 4095;
      v15 = v23 << 25 >> 16;
      v16 = RtlImageDirectoryEntryToData(*(PVOID *)(v12 + 48), 1u, 0xCu, &Size);
      if ( !v16 || !Size || (unsigned __int64)v16 > v14 || (unsigned __int64)v16 + Size - 1 < v15 )
      {
        DWORD1(v24) = 0;
        v30[19] = sub_140582320;
        v25 = 0LL;
        v30[21] = &v24;
        v26 = 0LL;
        *((_QWORD *)&v24 + 1) = v12;
        v30[3] = sub_14026DFC0(1LL);
        v30[4] = v15;
        v30[5] = v14;
        LODWORD(v30[0]) = 39;
        HIBYTE(v30[0]) = sub_1402CF4F0(v30[3]);
        sub_14030CF90(v30);
        LOBYTE(v17) = HIBYTE(v30[0]);
        sub_1402B0CE0(v30[3], v17);
        v18 = v28;
        if ( v25 == (unsigned int)((v28 - v23) >> 3) + 1 )
        {
          if ( (a3 & 1) == 0 )
          {
            memset(v31, 0, 0x68uLL);
            v31[1] = v13;
            LOBYTE(v19) = 2;
            if ( (int)sub_140358A20(v19, 45LL, 0LL, v31) < 0 )
              KeBugCheckEx(0x1Au, 0x1105uLL, (ULONG_PTR)v13, 0LL, 0LL);
          }
          sub_14033F41C(v12, v23, v18, 0LL);
          *(_QWORD *)&v24 = 1LL;
          v25 = 0LL;
          v26 = 0LL;
          *((_QWORD *)&v24 + 1) = v12;
          sub_1402D96AC(v12 + 160, 0LL);
          HIBYTE(v30[0]) = sub_1402CF4F0(v30[3]);
          sub_14030CF90(v30);
          LOBYTE(v20) = HIBYTE(v30[0]);
          sub_1402B0CE0(v30[3], v20);
          sub_1402D94D8(v12 + 160, 0LL);
          sub_14033EF50(v12, v23, v18, 1LL);
          if ( (dword_140C54F84 & 8) != 0 )
          {
            *(_QWORD *)&v24 = 2LL;
            v25 = 0LL;
            v26 = 0LL;
            *((_QWORD *)&v24 + 1) = v12;
            HIBYTE(v30[0]) = sub_1402CF4F0(v30[3]);
            sub_14030CF90(v30);
            LOBYTE(v21) = HIBYTE(v30[0]);
            sub_1402B0CE0(v30[3], v21);
          }
          *(_QWORD *)&v24 = 3LL;
          v25 = 0LL;
          v26 = 0LL;
          *((_QWORD *)&v24 + 1) = v12;
          HIBYTE(v30[0]) = sub_1402CF4F0(v30[3]);
          sub_14030CF90(v30);
          LOBYTE(v22) = HIBYTE(v30[0]);
          sub_1402B0CE0(v30[3], v22);
          *(_DWORD *)(v12 + 196) |= 0x200u;
        }
        else if ( (v26 & 1) != 0 )
        {
          v6 = -1073741755;
        }
        else
        {
          v6 = (v26 & 2) != 0 ? -1073741791 : -1073741819;
        }
        goto LABEL_30;
      }
    }
    v6 = -1073741637;
    goto LABEL_30;
  }
  return 3221225485LL;
}
