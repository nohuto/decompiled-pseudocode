/*
 * XREFs of sub_140A48B0C @ 0x140A48B0C
 * Callers:
 *     sub_140A487C0 @ 0x140A487C0 (sub_140A487C0.c)
 * Callees:
 *     sub_140236710 @ 0x140236710 (sub_140236710.c)
 *     sub_14038A428 @ 0x14038A428 (sub_14038A428.c)
 *     sub_140399444 @ 0x140399444 (sub_140399444.c)
 *     sub_14059673C @ 0x14059673C (sub_14059673C.c)
 *     sub_1405E2D20 @ 0x1405E2D20 (sub_1405E2D20.c)
 *     sub_1407FD674 @ 0x1407FD674 (sub_1407FD674.c)
 */

__int64 __fastcall sub_140A48B0C(__int64 a1)
{
  int v1; // eax
  int v3; // r15d
  ULONG_PTR **i; // rcx
  ULONG_PTR **v5; // rax
  ULONG_PTR **v6; // rdi
  ULONG_PTR *v7; // r14
  int j; // esi
  int v9; // eax
  unsigned int v10; // r9d
  int v11; // ebp
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  if ( (v1 & 0xC0) == 0 )
  {
    v13 = 0LL;
    v3 = (v1 & 0xA) == 0;
    for ( i = 0LL; ; i = v6 )
    {
      v5 = (ULONG_PTR **)sub_140236710(i);
      v6 = v5;
      if ( !v5 )
        break;
      v7 = *v5;
      if ( (*(_DWORD *)(a1 + 8) & 0x100) == 0 || v7 == &StartContext )
      {
        for ( j = 0; ; ++j )
        {
          sub_1407FD674((__int64)qword_140C52A10, 2);
          if ( j == v3 && !*(_BYTE *)(a1 + 20) )
          {
            *(_BYTE *)(a1 + 20) = 1;
            _InterlockedIncrement(&dword_140C5325C);
          }
          v9 = *(_DWORD *)(a1 + 8);
          if ( (v9 & 0x400) != 0 || (v9 & 4) != 0 )
          {
            v10 = *(_DWORD *)(a1 + 12);
          }
          else
          {
            if ( (v9 & 0x10) == 0 )
              sub_14059673C((__int64)v7);
            v10 = 0;
          }
          sub_14038A428((__int64 *)a1, (__int64)v7, *(_DWORD *)(a1 + 16), v10);
          v11 = sub_140399444(*(_QWORD *)a1, *(_DWORD *)(a1 + 8), &v13);
          if ( v11 < 0 )
          {
            sub_1405E2D20(v6);
            return (unsigned int)v11;
          }
          if ( *(_BYTE *)(a1 + 20) || v13 < 0x400 )
            break;
        }
        if ( (*(_DWORD *)(a1 + 8) & 0x100) == 0 )
          continue;
        sub_1405E2D20(v6);
        return 0LL;
      }
    }
  }
  return 0LL;
}
