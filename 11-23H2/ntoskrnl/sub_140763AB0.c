/*
 * XREFs of sub_140763AB0 @ 0x140763AB0
 * Callers:
 *     sub_140761B68 @ 0x140761B68 (sub_140761B68.c)
 *     sub_140761BEC @ 0x140761BEC (sub_140761BEC.c)
 *     sub_140763340 @ 0x140763340 (sub_140763340.c)
 *     WbGetWarbirdThread @ 0x140763394 (WbGetWarbirdThread.c)
 *     sub_140763A48 @ 0x140763A48 (sub_140763A48.c)
 *     sub_140763EF4 @ 0x140763EF4 (sub_140763EF4.c)
 *     sub_1407D2884 @ 0x1407D2884 (sub_1407D2884.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140763AB0(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, int *a5)
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
