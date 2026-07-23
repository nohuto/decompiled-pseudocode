/*
 * XREFs of sub_140602CF4 @ 0x140602CF4
 * Callers:
 *     sub_140603A00 @ 0x140603A00 (sub_140603A00.c)
 * Callees:
 *     sub_1406023D4 @ 0x1406023D4 (sub_1406023D4.c)
 *     sub_140A8ABF8 @ 0x140A8ABF8 (sub_140A8ABF8.c)
 */

void __fastcall sub_140602CF4(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, _DWORD *a5, _DWORD *a6)
{
  _QWORD *v7; // rsi
  __int64 v8; // rax
  unsigned int i; // edi

  if ( a3 )
  {
    v7 = a1;
    v8 = 0LL;
    if ( a4 )
    {
      if ( a5 && a6 )
      {
        *a4 = 0LL;
        *a5 = 0;
        *a6 = 0;
        if ( a1 )
        {
          for ( i = 0; i < 0xA; ++i )
          {
            if ( *v7 )
            {
              v8 = sub_140A8ABF8();
              if ( v8 )
              {
                if ( *(_QWORD *)v8 )
                  goto LABEL_14;
              }
            }
            ++v7;
          }
          if ( i != 10 && v8 )
          {
LABEL_14:
            sub_1406023D4((_WORD *)a3, (unsigned __int16 *)(*(_QWORD *)v8 + 24LL));
            return;
          }
          *(_QWORD *)a3 = *(_QWORD *)L"Unknown";
          *(_DWORD *)(a3 + 8) = *(_DWORD *)L"own";
          *(_WORD *)(a3 + 12) = aUnknown_0[6];
          *(_WORD *)(a3 + 14) = 0;
        }
        else
        {
          *(_DWORD *)a3 = 4259918;
          *(_WORD *)(a3 + 4) = 0;
        }
      }
    }
  }
}
