/*
 * XREFs of sub_1405D5604 @ 0x1405D5604
 * Callers:
 *     sub_1405D5704 @ 0x1405D5704 (sub_1405D5704.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 *     sub_1405D17F0 @ 0x1405D17F0 (sub_1405D17F0.c)
 */

void __fastcall sub_1405D5604(__int64 a1, unsigned int a2)
{
  ULONG_PTR v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // ecx
  _BYTE *v6; // rdx
  _BYTE *v7; // rax
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+28h] [rbp-40h]
  int v10; // [rsp+2Ch] [rbp-3Ch]
  _OWORD *v11; // [rsp+30h] [rbp-38h]
  _OWORD v12[2]; // [rsp+38h] [rbp-30h] BYREF

  if ( *(_DWORD *)(qword_140D068A8 + 4) )
  {
    v3 = *(_QWORD *)(a1 + 32);
    v10 = 0;
    memset(v12, 0, sizeof(v12));
    v4 = *(_QWORD *)(v3 + 64);
    if ( v4 == qword_140D04890 )
    {
      if ( v4 )
      {
        v8 = *(_QWORD *)(v3 + 72);
        v11 = v12;
        v9 = a2;
        if ( (unsigned __int8)sub_14042A5E0(35LL, &v8) )
        {
          v5 = 0;
          if ( a2 )
          {
            v6 = v12;
            v7 = (_BYTE *)(qword_140D05108 + 56);
            do
            {
              if ( *v6 )
              {
                if ( !v7[1] )
                  sub_1405CAE6C(0x61FuLL, v3, v5, 0LL);
                *v7 = 1;
                byte_140D06A49 = 1;
              }
              ++v5;
              ++v6;
              v7 += 448;
            }
            while ( v5 < a2 );
          }
          sub_1405D17F0(v3, (__int64)v12, a2);
        }
      }
    }
  }
}
