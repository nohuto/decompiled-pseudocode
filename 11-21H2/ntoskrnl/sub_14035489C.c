/*
 * XREFs of sub_14035489C @ 0x14035489C
 * Callers:
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 *     sub_1403D93F4 @ 0x1403D93F4 (sub_1403D93F4.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     sub_140354968 @ 0x140354968 (sub_140354968.c)
 */

char __fastcall sub_14035489C(__int64 a1)
{
  char v2; // r10
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  ULONG v5; // edx
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  _m_prefetchw((const void *)(a1 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 32), 0) & 8) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 504);
    v4 = v3 + *(_QWORD *)(a1 + 496);
    if ( v4 >= v3 )
    {
      v7 = v4;
      if ( MEMORY[0xFFFFF78000000008] < v4 && (int)sub_140354968(v4, MEMORY[0xFFFFF78000000008], &v7) >= 0 )
      {
        v5 = -1;
        if ( v7 / 0x186A0 <= 0xFFFFFFFF )
          v5 = v7 / 0x186A0;
        KeSetCoalescableTimer((PKTIMER)(a1 + 368), (LARGE_INTEGER)-(__int64)v7, 0, v5, (PKDPC)(a1 + 432));
        _InterlockedOr((volatile signed __int32 *)(a1 + 32), 4u);
        return 1;
      }
    }
  }
  return v2;
}
