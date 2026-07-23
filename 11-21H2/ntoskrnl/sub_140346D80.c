/*
 * XREFs of sub_140346D80 @ 0x140346D80
 * Callers:
 *     sub_1406579F8 @ 0x1406579F8 (sub_1406579F8.c)
 *     sub_140657ADC @ 0x140657ADC (sub_140657ADC.c)
 *     sub_140677DC0 @ 0x140677DC0 (sub_140677DC0.c)
 *     sub_1406D3BF0 @ 0x1406D3BF0 (sub_1406D3BF0.c)
 *     sub_1406DD0AC @ 0x1406DD0AC (sub_1406DD0AC.c)
 *     sub_1407172C8 @ 0x1407172C8 (sub_1407172C8.c)
 *     sub_14071B640 @ 0x14071B640 (sub_14071B640.c)
 *     sub_1407C3850 @ 0x1407C3850 (sub_1407C3850.c)
 *     sub_1407C6580 @ 0x1407C6580 (sub_1407C6580.c)
 *     sub_1409207EC @ 0x1409207EC (sub_1409207EC.c)
 * Callees:
 *     sub_1407C0890 @ 0x1407C0890 (sub_1407C0890.c)
 */

char __fastcall sub_140346D80(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v3; // r9d
  __int64 v6; // rcx
  char result; // al
  _DWORD *v8; // rax
  unsigned __int64 v9; // rdx
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v3 = *(_DWORD *)(a1 + 1872);
  if ( v3 )
  {
    v6 = *(int *)(a1 + 1880);
    if ( (int)v6 >= 0 && (unsigned int)v6 < v3 && *(_DWORD *)(*(_QWORD *)(a1 + 1888) + 16 * v6) == a2 )
    {
      *a3 = v6;
      return 1;
    }
    else
    {
      v8 = (_DWORD *)sub_1407C0890((unsigned int)&v10, *(_QWORD *)(a1 + 1888), v3, 16, (__int64)sub_140230260);
      v9 = ((unsigned __int64)v8 - *(_QWORD *)(a1 + 1888)) >> 4;
      if ( (unsigned int)v9 < *(_DWORD *)(a1 + 1872) && *v8 == v10 )
      {
        *(_DWORD *)(a1 + 1880) = v9;
        result = 1;
        *a3 = v9;
      }
      else
      {
        *a3 = v9;
        return 0;
      }
    }
  }
  else
  {
    *a3 = 0;
    return 0;
  }
  return result;
}
