/*
 * XREFs of sub_140B059BC @ 0x140B059BC
 * Callers:
 *     sub_14082ACF0 @ 0x14082ACF0 (sub_14082ACF0.c)
 * Callees:
 *     sub_1403C2CD0 @ 0x1403C2CD0 (sub_1403C2CD0.c)
 */

__int64 __fastcall sub_140B059BC(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r9d
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned __int8 *v5; // rbp
  __int64 result; // rax
  _QWORD ***v7; // rbx
  __int64 v8; // r13
  _QWORD ***v9; // rsi
  __int64 v10; // r12
  _QWORD **v11; // rdi
  __int64 v12; // r15
  _QWORD *i; // r14
  unsigned __int8 *v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+28h] [rbp-50h]
  unsigned int v16; // [rsp+80h] [rbp+8h]
  __int64 v18; // [rsp+90h] [rbp+18h]
  unsigned __int8 *v19; // [rsp+98h] [rbp+20h]

  v2 = dword_140C507C0[a2];
  v3 = qword_140C54F90 + 24512LL * a1;
  v16 = v2;
  v4 = v3 + 1072LL * a2;
  v14 = (unsigned __int8 *)(v3 + (unsigned int)dword_140D05004 + 22821LL);
  v15 = v4;
  v5 = (unsigned __int8 *)(v3 + 22821);
  v19 = (unsigned __int8 *)(v3 + 22821);
  do
  {
    result = 32LL * *v5;
    v7 = (_QWORD ***)(result + v4 + 560);
    v18 = 2LL;
    do
    {
      v8 = 2LL;
      do
      {
        v9 = v7;
        v10 = 4LL;
        do
        {
          if ( *(v9 - 64) )
          {
            v11 = *v9;
            if ( v2 )
            {
              v12 = v2;
              do
              {
                for ( i = *v11; i != v11; i = (_QWORD *)*i )
                  result = sub_1403C2CD0(0xAAAAAAAAAAAAAAABuLL * ((__int64)(i + 0x44000000000LL) >> 4), a2, 1LL);
                v11 += 3;
                --v12;
              }
              while ( v12 );
              v2 = v16;
            }
          }
          ++v9;
          --v10;
        }
        while ( v10 );
        v7 += 16;
        --v8;
      }
      while ( v8 );
      --v18;
    }
    while ( v18 );
    v4 = v15;
    v5 = v19 + 1;
    v19 = v5;
  }
  while ( v5 != v14 );
  return result;
}
