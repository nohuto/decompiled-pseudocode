/*
 * XREFs of sub_1407638C0 @ 0x1407638C0
 * Callers:
 *     sub_140761978 @ 0x140761978 (sub_140761978.c)
 *     sub_1407619FC @ 0x1407619FC (sub_1407619FC.c)
 *     sub_140763150 @ 0x140763150 (sub_140763150.c)
 *     WbGetWarbirdThread @ 0x1407631A4 (WbGetWarbirdThread.c)
 *     sub_140763858 @ 0x140763858 (sub_140763858.c)
 *     sub_140763D04 @ 0x140763D04 (sub_140763D04.c)
 *     sub_1407D25B4 @ 0x1407D25B4 (sub_1407D25B4.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1407638C0(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, int *a5)
{
  int v5; // ebp
  int v6; // esi
  int v11; // ebx
  int v12; // r14d
  __int64 v13; // rax
  __int64 result; // rax

  v5 = 0;
  v6 = *(_DWORD *)(a1 + 4) - 1;
  v11 = 0;
  v12 = -1073741198;
  if ( v6 >= 0 )
  {
    while ( 1 )
    {
      v11 = (v6 + v5) / 2;
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 32))(
              *(_QWORD *)((unsigned int)(*(_DWORD *)a1 * v11) + *(_QWORD *)(a1 + 16)),
              a2,
              a3);
      if ( !v13 )
        break;
      if ( v13 < 0 )
        v6 = v11 - 1;
      else
        v5 = ++v11;
      if ( v5 > v6 )
        goto LABEL_8;
    }
    v12 = 0;
  }
LABEL_8:
  if ( a5 )
    *a5 = v11;
  result = (unsigned int)v12;
  if ( a4 )
  {
    if ( v12 >= 0 )
      *a4 = *(_QWORD *)((unsigned int)(*(_DWORD *)a1 * v11) + *(_QWORD *)(a1 + 16));
  }
  return result;
}
