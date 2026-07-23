/*
 * XREFs of sub_140910210 @ 0x140910210
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1407190AC @ 0x1407190AC (sub_1407190AC.c)
 *     sub_14071A400 @ 0x14071A400 (sub_14071A400.c)
 */

__int64 __fastcall sub_140910210(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  _QWORD *v2; // rbx
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  __int16 v5; // ax
  char v6; // al
  _QWORD *v7; // rdx
  struct _KEVENT *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v2 = *(_QWORD **)(a1 + 72);
  v3 = (_QWORD *)v2[8];
  if ( (_QWORD *)v3[13] == v3 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v3);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v4 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( *(_QWORD *)(v4 + 1408) && ((v5 = *(_WORD *)(v4 + 2412), v5 == 332) || v5 == 452 ? (v6 = 1) : (v6 = 0), v6) )
  {
    **(_DWORD **)(v2[8] + 104LL) = 267;
    *(_DWORD *)(*(_QWORD *)(v2[8] + 104LL) + 4LL) = 0;
  }
  else
  {
    **(_DWORD **)(v2[8] + 104LL) = 267;
    *(_QWORD *)(*(_QWORD *)(v2[8] + 104LL) + 8LL) = 0LL;
  }
  v7 = (_QWORD *)v2[8];
  if ( (_QWORD *)v7[13] == v7 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v7);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v8 = *(struct _KEVENT **)(v2[8] + 8LL);
  if ( v8 )
  {
    KeSetEvent(v8, 0, 0);
    ObfDereferenceObject(*(PVOID *)(v2[8] + 8LL));
  }
  v9 = v2[2];
  v10 = (_QWORD *)v2[3];
  if ( *(_QWORD **)(v9 + 8) != v2 + 2 || (_QWORD *)*v10 != v2 + 2 )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  sub_14071A400((__int64)v2);
  sub_1407190AC(v2);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v15 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
