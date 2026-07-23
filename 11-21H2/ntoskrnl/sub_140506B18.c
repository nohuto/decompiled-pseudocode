/*
 * XREFs of sub_140506B18 @ 0x140506B18
 * Callers:
 *     sub_140505B24 @ 0x140505B24 (sub_140505B24.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140507BD8 @ 0x140507BD8 (sub_140507BD8.c)
 */

_DWORD *__fastcall sub_140506B18(__int64 a1)
{
  _DWORD *v1; // rbx
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  v1 = 0LL;
  if ( byte_140D014BA )
  {
    if ( qword_140D01A98 )
    {
      if ( (int)sub_14042A5E0(*(unsigned int *)(a1 + 16), &v7) >= 0 )
      {
        v3 = (unsigned int)(*(_DWORD *)(a1 + 36) + v7 * dword_140D01AA8);
        if ( v3 < qword_140D01AA0 )
        {
          v4 = *(_QWORD *)(qword_140D01A98 + 8 * v3 + 64);
          if ( v4 < 0 )
          {
            v5 = v4 & 0x7FFFFFFFFFFFFFFFLL;
            if ( v5 >= qword_140D01AB0 && v5 + 4096 <= qword_140D01AB0 + qword_140D01AC0 )
            {
              v1 = (char *)qword_140D01AB8 + v5 - qword_140D01AB0;
              if ( !*v1 )
                return 0LL;
              if ( (int)sub_140507BD8(a1, (char *)qword_140D01AB8 + v5 - qword_140D01AB0) < 0 )
              {
                *v1 = 0;
                return 0LL;
              }
            }
          }
        }
      }
    }
  }
  return v1;
}
