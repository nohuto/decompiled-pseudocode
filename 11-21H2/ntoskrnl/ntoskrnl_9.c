/*
 * XREFs of ntoskrnl_9 @ 0x140931660
 * Callers:
 *     <none>
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall ntoskrnl_9(size_t Size, struct _MDL *a2)
{
  __int64 v4; // rbp
  int v5; // ebx
  ULONG v6; // r14d
  __int64 *v8[10]; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD v9[14]; // [rsp+80h] [rbp-98h] BYREF

  memset(v9, 0, 0x68uLL);
  memset(v8, 0, 0x48uLL);
  v4 = 0LL;
  v5 = 0;
  memset(a2, 0, Size);
  if ( Size )
  {
    while ( 1 )
    {
      v6 = Size;
      if ( 2072576 - ((unsigned __int16)a2 & 0xFFFu) < Size )
        v6 = 2072576 - ((unsigned __int16)a2 & 0xFFF);
      v5 = sub_1403A0F08((__int64)v8, a2, v6, 1, 0);
      if ( v5 < 0 )
        break;
      v9[2] = v8[0];
      v9[3] = v8[7];
      v9[1] = v4;
      v5 = sub_140358A20(2u, 76, 0, (__int64)v9);
      sub_1403A0EB4(v8);
      if ( v5 == -2147483622 )
        return 0;
      if ( v5 >= 0 )
      {
        a2 = (struct _MDL *)((char *)a2 + v6);
        v4 += v6;
        Size -= v6;
        if ( Size )
          continue;
      }
      return (unsigned int)v5;
    }
  }
  return (unsigned int)v5;
}
