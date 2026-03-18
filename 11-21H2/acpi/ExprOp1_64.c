/*
 * XREFs of ExprOp1_64 @ 0x1C002BDF0
 * Callers:
 *     ExprOp1 @ 0x1C002BDB0 (ExprOp1.c)
 * Callees:
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C0017010 (WriteObject.c)
 *     ValidateTarget @ 0x1C0018344 (ValidateTarget.c)
 */

__int64 __fastcall ExprOp1_64(struct _SLIST_ENTRY *a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 i; // rdx
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  v15 = 0LL;
  v4 = 0LL;
  result = ValidateArgTypes((__int64)a1, a2[10], 0, "I");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget((__int64)a1, a2[10] + 40LL, 0x87u, (__int64)&v15);
    if ( !(_DWORD)result )
    {
      if ( *(_DWORD *)(a2[7] + 8LL) == 128 )
      {
        v4 = ~*(_QWORD *)(a2[10] + 16LL);
LABEL_5:
        v6 = v15;
        *(_WORD *)(a2[11] + 2LL) = 1;
        *(_QWORD *)(a2[11] + 16LL) = v4;
        return WriteObject(a1, v6, a2[11]);
      }
      if ( *(_DWORD *)(a2[7] + 8LL) == 129 )
      {
        v13 = !_BitScanReverse64((unsigned __int64 *)&v14, *(_QWORD *)(a2[10] + 16LL));
      }
      else
      {
        if ( *(_DWORD *)(a2[7] + 8LL) != 130 )
        {
          if ( *(_DWORD *)(a2[7] + 8LL) == 10331 )
          {
            v11 = 1LL;
            for ( i = *(_QWORD *)(a2[10] + 16LL); i; i >>= 4 )
            {
              v4 += v11 * (i & 0xF);
              v11 *= 10LL;
            }
          }
          else if ( *(_DWORD *)(a2[7] + 8LL) == 10587 )
          {
            v7 = 0;
            v8 = *(_QWORD *)(a2[10] + 16LL);
            do
            {
              if ( !v8 )
                break;
              v9 = v8 / 0xA;
              v10 = (v8 % 0xA) << v7;
              v7 += 4;
              v4 |= v10;
              v8 = v9;
            }
            while ( v7 < 0x40 );
          }
          goto LABEL_5;
        }
        v13 = !_BitScanForward64((unsigned __int64 *)&v14, *(_QWORD *)(a2[10] + 16LL));
      }
      if ( !v13 )
        v4 = (unsigned int)(v14 + 1);
      goto LABEL_5;
    }
  }
  return result;
}
