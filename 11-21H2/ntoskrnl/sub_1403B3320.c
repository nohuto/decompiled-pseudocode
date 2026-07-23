/*
 * XREFs of sub_1403B3320 @ 0x1403B3320
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403B3540 @ 0x1403B3540 (sub_1403B3540.c)
 *     sub_1403B3594 @ 0x1403B3594 (sub_1403B3594.c)
 *     sub_1403BD330 @ 0x1403BD330 (sub_1403BD330.c)
 *     sub_1403BE7F0 @ 0x1403BE7F0 (sub_1403BE7F0.c)
 *     sub_1403DD1E4 @ 0x1403DD1E4 (sub_1403DD1E4.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403B3320(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5, unsigned int *a6)
{
  __int64 result; // rax
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // esi
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned int v19; // eax
  bool v20; // zf
  unsigned int *v21; // rcx
  _DWORD v22[6]; // [rsp+20h] [rbp-18h] BYREF
  int v23; // [rsp+40h] [rbp+8h] BYREF

  v23 = 0;
  v22[0] = 0;
  if ( !byte_140D011A2 && !byte_140C54BD8 )
  {
    if ( !qword_140C4AD28 )
      return 3221225486LL;
    if ( !qword_140C54BD0 )
    {
      qword_140C54BD0 = sub_1403BE7F0(qword_140C4AD28, 4096LL, 0LL);
      if ( !qword_140C54BD0 )
        return 3221225626LL;
    }
  }
  result = sub_1403B3594();
  if ( (int)result >= 0 )
  {
    if ( !*(_BYTE *)(a1 + 27) && (unsigned __int8)sub_1403DD1E4(&v23, v22) )
    {
      *(_DWORD *)(a1 + 32) = v23;
      *(_DWORD *)(a1 + 36) = v22[0];
    }
    v10 = *(unsigned int *)(a1 + 32);
    v11 = a4 | 0x10000;
    if ( (_DWORD)v10 )
      sub_14042A5E0(v10, v11);
    v12 = *(unsigned int *)(a1 + 36);
    if ( (_DWORD)v12 )
      sub_14042A5E0(v12, v11);
    sub_1403B3540(0LL, 15LL);
    v14 = a3 | 0x100;
    if ( byte_140C4A020 && (sub_14042A5E0(48LL, v13) & 0x1000000) != 0 )
      v14 |= 0x1000u;
    sub_14042A5E0(240LL, v14);
    sub_14042A5E0(800LL, a4 | 0x30000u);
    sub_14042A5E0(992LL, 11LL);
    sub_14042A5E0(880LL, a5);
    sub_14042A5E0(832LL, v11);
    v16 = sub_14042A5E0(848LL, v15);
    v17 = v16;
    LODWORD(v17) = v16 | 0x10000;
    sub_14042A5E0(848LL, v17);
    sub_14042A5E0(848LL, v11);
    sub_14042A5E0(864LL, a4 | 0x18400u);
    v19 = sub_14042A5E0(32LL, v18);
    v20 = byte_140D011A2 == 0;
    v21 = a6;
    *a6 = v19;
    if ( v20 )
      *v21 = HIBYTE(v19);
    if ( *(_BYTE *)(a1 + 27) )
      return 0LL;
    result = sub_1403BD330(a1);
    if ( (int)result >= 0 )
    {
      *(_BYTE *)(a1 + 27) = 1;
      return 0LL;
    }
  }
  return result;
}
