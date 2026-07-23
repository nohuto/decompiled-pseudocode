/*
 * XREFs of sub_140653AA4 @ 0x140653AA4
 * Callers:
 *     sub_140653964 @ 0x140653964 (sub_140653964.c)
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     sub_140544258 @ 0x140544258 (sub_140544258.c)
 *     sub_14054599C @ 0x14054599C (sub_14054599C.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140653AA4(char a1, char a2, __int64 a3, unsigned __int64 a4, _QWORD *a5)
{
  unsigned __int64 v6; // rdi
  int v9; // esi
  int v10; // eax
  int v11; // ebx
  char v12; // r12
  unsigned __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+90h] [rbp+28h]

  v6 = a4;
  v9 = 0;
  *a5 = 0LL;
  v18 = 0LL;
  LOBYTE(v18) = a2;
  if ( a1 )
    v10 = 65724;
  else
    v10 = 65783;
  LODWORD(v19) = v10;
  if ( a4 )
  {
    v11 = 0;
    do
    {
      v12 = 0;
      if ( v6 <= 0xFFF )
      {
        v14 = (v11 ^ v6) & 0xFFF;
      }
      else
      {
        if ( (a3 & 0x1FF) == 0 )
        {
          LODWORD(v13) = 4095;
          v12 = 1;
          if ( v6 >> 9 < 0xFFF )
            v13 = v6 >> 9;
          v11 ^= (v11 ^ v13) & 0xFFF;
          goto LABEL_15;
        }
        v11 |= 0xFFFu;
        HIDWORD(v19) = v11;
        v14 = v11;
        if ( v6 <= 0x1FFE )
          goto LABEL_16;
        v11 = (v11 ^ ~(a3 & 0x1FF)) & 0xFFF;
      }
      v11 ^= v14;
LABEL_15:
      HIDWORD(v19) = v11;
LABEL_16:
      *((_QWORD *)&v18 + 1) = a3;
      BYTE1(v18) = v12;
      v15 = HvlInvokeFastExtendedHypercall(v19, (__int64)&v18, 0x10u, 0LL, 0);
      v16 = (unsigned __int64)(WORD2(v15) & 0xFFF) << 9;
      if ( !v12 )
        v16 = WORD2(v15) & 0xFFF;
      *a5 += v16;
      v6 -= v16;
      a3 += v16;
      if ( (_WORD)v15 == 11 )
      {
        v9 = sub_140544258(0, WORD2(v15) & 0xFFF, 0);
        if ( v9 < 0 )
        {
          v9 = -1073741670;
          break;
        }
      }
      else if ( (_WORD)v15 )
      {
        v9 = sub_14054CA70(v15);
        break;
      }
    }
    while ( v6 );
  }
  if ( !a1 && *a5 )
    sub_14054599C();
  return (unsigned int)v9;
}
