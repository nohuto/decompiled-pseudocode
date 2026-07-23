/*
 * XREFs of sub_140A74B64 @ 0x140A74B64
 * Callers:
 *     sub_140565E50 @ 0x140565E50 (sub_140565E50.c)
 * Callees:
 *     sub_140A6F7A0 @ 0x140A6F7A0 (sub_140A6F7A0.c)
 *     sub_140A6F900 @ 0x140A6F900 (sub_140A6F900.c)
 *     sub_140A74644 @ 0x140A74644 (sub_140A74644.c)
 *     sub_140A748B4 @ 0x140A748B4 (sub_140A748B4.c)
 *     sub_140A74AA0 @ 0x140A74AA0 (sub_140A74AA0.c)
 */

void __fastcall sub_140A74B64(__int64 a1)
{
  __int64 *v1; // rdx
  unsigned __int64 v2; // rcx
  __int64 v3; // rbp
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  char v9; // si
  unsigned __int8 *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0LL;
  if ( byte_140C40431 )
  {
    v1 = (__int64 *)&unk_140C33EC8;
    v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v3 = *((_QWORD *)KeGetCurrentThread() + 23);
    while ( 1 )
    {
      if ( (v1[3] & 0xA) != 0 )
      {
        v4 = *(v1 - 1);
        if ( v4 >= 0xFFFF800000000000uLL || *v1 == v3 )
        {
          v5 = v2 + 4096;
          v6 = v4 & ~(unsigned __int64)*((unsigned __int8 *)v1 + 29);
          if ( v6 >= v2 && v6 < v5 )
            break;
          v7 = v6 + *((unsigned __int8 *)v1 + 28);
          if ( v7 >= v6 && v7 > v2 && v7 <= v5 )
            break;
        }
      }
      v1 += 5;
      if ( (__int64)v1 >= (__int64)&qword_140C343C8 )
        return;
    }
    v9 = sub_140A6F7A0(0LL);
    byte_140C40431 = 0;
    v10 = (unsigned __int8 *)&unk_140C33EE5;
    do
    {
      v11 = *(unsigned int *)(v10 - 5);
      if ( (v11 & 0xA) != 0 )
      {
        v8 = *(_QWORD *)(v10 - 37);
        if ( v8 >= 0xFFFF800000000000uLL || *(_QWORD *)(v10 - 29) == v3 )
        {
          if ( (int)sub_140A74644((char *)(v8 & ~(unsigned __int64)*v10), (__int64)&v14, *(v10 - 1), 4) >= 0 )
          {
            v12 = (__int64)(v10 - 37);
            if ( (*(_DWORD *)(v10 - 5) & 2) != 0 )
            {
              *(_QWORD *)(v10 - 13) = v14;
              v13 = sub_140A748B4(v12, &v14);
              if ( v13 )
                *(_DWORD *)(v10 - 5) = v13;
            }
            else
            {
              sub_140A74AA0(v12, &v14);
            }
          }
        }
        else
        {
          byte_140C40431 = 1;
        }
      }
      v10 += 40;
    }
    while ( (__int64)v10 < (__int64)((unsigned __int8 *)qword_140C343E0 + 5) );
    LOBYTE(v11) = v9;
    sub_140A6F900(v11, v8);
  }
}
