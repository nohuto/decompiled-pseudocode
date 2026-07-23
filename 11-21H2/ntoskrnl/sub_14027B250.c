/*
 * XREFs of sub_14027B250 @ 0x14027B250
 * Callers:
 *     sub_14027AA30 @ 0x14027AA30 (sub_14027AA30.c)
 * Callees:
 *     sub_14036044C @ 0x14036044C (sub_14036044C.c)
 *     sub_14045FA6C @ 0x14045FA6C (sub_14045FA6C.c)
 */

struct _KTHREAD *__fastcall sub_14027B250(_QWORD *a1, int a2, int a3)
{
  struct _KTHREAD *result; // rax
  _QWORD *v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int16 v10; // ax
  _DWORD v11[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-30h]
  __int64 v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-18h]

  result = KeGetCurrentThread();
  v6 = (_QWORD *)*((_QWORD *)result + 68);
  if ( *a1 || a1[1] )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v10 = 626;
        goto LABEL_13;
      }
      if ( a2 == 2 )
      {
        v10 = 627;
LABEL_13:
        result = (struct _KTHREAD *)sub_14045FA6C(v6[270], v10, a3, (int)a1 + 32);
        goto LABEL_3;
      }
    }
    v10 = 544;
    goto LABEL_13;
  }
LABEL_3:
  if ( a1[8] )
  {
    if ( a2 != 2 )
    {
      v7 = MEMORY[0xFFFFF78000000320];
      v8 = MEMORY[0xFFFFF78000000320] - a1[8];
      a1[8] = v8;
      v9 = v6[136] ^ v6[141];
      v11[0] = 2 * v8;
      v11[1] = dword_140CF5E50;
      v14 = a1[6];
      v12 = (unsigned int)(a1[4] >> 9);
      v13 = a1[5];
      v15 = v9 & 0x1FFFFFFFFFFFFFFFLL;
      return (struct _KTHREAD *)sub_14036044C(29LL, v7, v11);
    }
  }
  return result;
}
