/*
 * XREFs of sub_180015204 @ 0x180015204
 * Callers:
 *     sub_18001599C @ 0x18001599C (sub_18001599C.c)
 * Callees:
 *     sub_1800153DC @ 0x1800153DC (sub_1800153DC.c)
 */

int __fastcall sub_180015204(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int *a6,
        __int64 a7,
        __int64 a8)
{
  HANDLE EventW; // rax
  CLIENT_CALL_RETURN v13; // rax
  int v14; // eax
  _QWORD v16[8]; // [rsp+58h] [rbp-40h] BYREF

  v16[0] = -1LL;
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *(_QWORD *)(a1 + 64) = EventW;
  if ( EventW )
  {
    if ( (unsigned int)sub_1800153DC(a2) )
    {
      v13.Pointer = NdrClientCall3(
                      (MIDL_STUBLESS_PROXY_INFO *)&stru_1800209B0,
                      2u,
                      0LL,
                      v16,
                      *(_QWORD *)(a2 + 8),
                      a3,
                      a4,
                      a5,
                      a1 + 40,
                      a6).Pointer;
      v16[1] = v13.Pointer;
    }
    else
    {
      LODWORD(v13.Pointer) = CrmpInProcActivityAllocate(v16, *(_QWORD *)(a2 + 16), a3, a4, a5, a1 + 40, a6);
    }
    if ( SLODWORD(v13.Simple) >= 0 )
    {
      *(_QWORD *)(a1 + 16) = a2;
      *(_DWORD *)a1 = a3;
      *(_QWORD *)(a1 + 24) = a7;
      *(_QWORD *)(a1 + 32) = a8;
      *(_QWORD *)(a1 + 8) = v16[0];
      if ( a6 )
        v14 = *a6;
      else
        v14 = -1;
      *(_DWORD *)(a1 + 56) = v14;
      LODWORD(v13.Pointer) = 0;
    }
  }
  else if ( (int)GetLastError() > 0 )
  {
    LODWORD(v13.Pointer) = (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    LODWORD(v13.Pointer) = GetLastError();
  }
  return (int)v13.Pointer;
}
