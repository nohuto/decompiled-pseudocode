/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x18008AE10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall RtlLookupFirstMatchingElementGenericTableAvl(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  int v7; // eax
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  _QWORD *j; // rax
  _QWORD *i; // rcx

  *a3 = 0LL;
  if ( *(_DWORD *)(a1 + 44) )
  {
    v6 = *(_QWORD **)(a1 + 16);
    do
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(a1 + 72))(a1, a2, v6 + 4);
      if ( v7 )
      {
        if ( v7 != 1 )
        {
          while ( 1 )
          {
            v8 = (_QWORD *)v6[1];
            v9 = v6;
            if ( v8 )
            {
              for ( i = (_QWORD *)v8[2]; i; i = (_QWORD *)i[2] )
                v8 = i;
              v6 = v8;
            }
            else
            {
              for ( j = (_QWORD *)*v6; (_QWORD *)j[1] == v6; j = (_QWORD *)*j )
                v6 = j;
              if ( (_QWORD *)j[2] != v6 || (_QWORD *)*j == j )
              {
LABEL_10:
                *a3 = v9;
                return v9 + 4;
              }
              v6 = j;
            }
            if ( (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD *))(a1 + 72))(a1, a2, v6 + 4) != 2 )
              goto LABEL_10;
          }
        }
        v6 = (_QWORD *)v6[2];
      }
      else
      {
        v6 = (_QWORD *)v6[1];
      }
    }
    while ( v6 );
  }
  return 0LL;
}
