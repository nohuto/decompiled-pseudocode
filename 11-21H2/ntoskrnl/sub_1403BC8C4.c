/*
 * XREFs of sub_1403BC8C4 @ 0x1403BC8C4
 * Callers:
 *     sub_1403BBEC4 @ 0x1403BBEC4 (sub_1403BBEC4.c)
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_1403BC8C4(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  char v4; // bp
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r12
  unsigned __int64 v12; // r14
  __int64 v13; // rsi
  unsigned int v14; // edi
  unsigned __int64 v15; // rcx
  unsigned __int128 v16; // rax
  unsigned __int64 v17; // r15
  unsigned int i; // ecx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // edx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-68h] BYREF
  __int64 v24; // [rsp+30h] [rbp-58h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-50h] BYREF
  int v26; // [rsp+80h] [rbp-8h]

  v3 = *(_DWORD *)(a1 + 224);
  v4 = 0;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (v3 & 1) != 0
    && KeQueryActiveProcessorCountEx(0xFFFFu) >= 2
    && KeGetCurrentIrql() < 2u
    && (v26 & 0x200) != 0
    && (*(_DWORD *)(a1 + 184) & 0x20) == 0 )
  {
    v4 = 1;
    v22 = dword_140D0E5E0[HIDWORD(KeGetPcr()[1].LockArray)];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v22 >> 6);
    Affinity.Mask = 1LL << (v22 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  v8 = sub_140303720(a1);
  v24 = sub_14042A5E0(v8, v9);
  v10 = __readcr2();
  __writecr2(v10);
  v11 = 1LL << *(_DWORD *)(a1 + 220);
  v12 = v24;
  v13 = 0LL;
  v14 = 0;
  v15 = a2 * *(_QWORD *)(a1 + 192) + 9999999;
  v16 = v15 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
  v17 = v15 / 0x989680 + 1;
  if ( v15 / 0x989680 != -1LL )
  {
    do
    {
      if ( a3 )
      {
        if ( (++v14 & dword_140C4C47C) != 0 || !qword_140C4C480 )
          _mm_pause();
        else
          sub_14042A5E0(v14, *((_QWORD *)&v16 + 1));
      }
      else
      {
        for ( i = 0; i < 0xC8; ++i )
        {
          _mm_pause();
          v19 = i * dword_140C4C7F0;
          dword_140C4C7F0 = v19;
        }
      }
      v20 = sub_140303720(a1);
      *(_QWORD *)&v16 = sub_14042A5E0(v20, v21);
      if ( (unsigned __int64)v16 < v12 )
        v13 += v11;
      v12 = v16;
    }
    while ( (__int64)v16 + v13 - v24 < v17 );
  }
  if ( v4 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
