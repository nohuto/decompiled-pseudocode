/*
 * XREFs of sub_1409466AC @ 0x1409466AC
 * Callers:
 *     sub_140817258 @ 0x140817258 (sub_140817258.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405609F8 @ 0x1405609F8 (sub_1405609F8.c)
 *     sub_140560AAC @ 0x140560AAC (sub_140560AAC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409466AC(_DWORD *a1, _OWORD *a2)
{
  bool v2; // zf
  int v5; // eax
  int v6; // esi
  int v7; // edi
  __int64 Pool2; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  char v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1 == 1;
  v13 = 0;
  if ( v2 && ((v5 = a1[2]) == 0 || v5 == 3) )
  {
    v6 = a1[3];
    if ( sub_1405609F8(v6) )
    {
      return 0;
    }
    else
    {
      Pool2 = ExAllocatePool2(64LL, 200LL, 1651077195LL);
      v9 = Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 8) = Pool2;
        *(_QWORD *)Pool2 = Pool2;
        *(_DWORD *)(Pool2 + 16) = a1[2];
        *(_DWORD *)(Pool2 + 20) = v6;
        *(_DWORD *)(Pool2 + 32) = a1[6];
        *(_OWORD *)(Pool2 + 40) = *a2;
        v10 = a1[2];
        if ( v10 )
        {
          if ( v10 == 3 )
            *(_BYTE *)(v9 + 28) = 0;
        }
        else
        {
          v11 = (unsigned int)a1[16];
          *(_DWORD *)(v9 + 24) = v11;
          *(_BYTE *)(v9 + 28) = sub_14042A5E0(0LL, v11);
        }
        KeInitializeEvent((PRKEVENT)(v9 + 168), SynchronizationEvent, 1u);
        KeInitializeDpc((PRKDPC)(v9 + 104), (PKDEFERRED_ROUTINE)sub_140459F80, (PVOID)v9);
        *(_QWORD *)(v9 + 56) = 0LL;
        *(_QWORD *)(v9 + 72) = 0LL;
        *(_QWORD *)(v9 + 88) = sub_140560BB0;
        *(_QWORD *)(v9 + 96) = v9;
        *(_BYTE *)(v9 + 105) = 2;
        v7 = sub_140560AAC(v9, &v13);
        if ( v7 < 0 || !v13 )
          ExFreePoolWithTag((PVOID)v9, 0x6269704Bu);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v7;
}
