/*
 * XREFs of RtlCreateAtomTableEx @ 0x14022EB30
 * Callers:
 *     RtlCreateAtomTable @ 0x1406A6270 (RtlCreateAtomTable.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406A628C @ 0x1406A628C (sub_1406A628C.c)
 *     sub_1406A629C @ 0x1406A629C (sub_1406A629C.c)
 *     sub_1406AB544 @ 0x1406AB544 (sub_1406AB544.c)
 *     sub_1407D454C @ 0x1407D454C (sub_1407D454C.c)
 */

__int64 __fastcall RtlCreateAtomTableEx(unsigned int a1, int a2, _QWORD *a3)
{
  unsigned int v3; // edi
  int v6; // ebp
  unsigned __int64 v7; // rax
  size_t v8; // rsi
  _DWORD *v9; // rax
  _DWORD *v10; // rbx

  v3 = 0;
  if ( *a3 )
    return v3;
  v6 = 37;
  if ( a1 > 1 )
    v6 = a1;
  v7 = 48LL * (unsigned int)(v6 - 1);
  if ( is_mul_ok(0x30uLL, (unsigned int)(v6 - 1)) )
  {
    v8 = v7 + 40;
    if ( v7 + 40 >= v7 )
    {
      v9 = (_DWORD *)sub_1407D454C(v7 + 40, 1416459329LL);
      v10 = v9;
      if ( v9 )
      {
        memset(v9, 0, v8);
        v10[7] = v6;
        if ( (unsigned __int8)sub_1406A629C(v10) )
        {
          sub_1406A628C(v10);
          *v10 = 1836020801;
          v10[1] = 1;
          v10[6] = a2;
          *a3 = v10;
        }
        else
        {
          v3 = -1073741801;
          sub_1406AB544(v10);
        }
      }
      else
      {
        return (unsigned int)-1073741801;
      }
      return v3;
    }
  }
  return 3221225621LL;
}
