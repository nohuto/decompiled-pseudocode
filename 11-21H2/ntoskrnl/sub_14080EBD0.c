/*
 * XREFs of sub_14080EBD0 @ 0x14080EBD0
 * Callers:
 *     sub_14080EA40 @ 0x14080EA40 (sub_14080EA40.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402D3C18 @ 0x1402D3C18 (sub_1402D3C18.c)
 *     ExDeleteTimer @ 0x1402D3D40 (ExDeleteTimer.c)
 *     sub_14074ECA8 @ 0x14074ECA8 (sub_14074ECA8.c)
 *     sub_14074ED04 @ 0x14074ED04 (sub_14074ED04.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_14080ED34 @ 0x14080ED34 (sub_14080ED34.c)
 *     sub_140950084 @ 0x140950084 (sub_140950084.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14080EBD0(_QWORD *P)
{
  PVOID **v2; // rdx
  PVOID *v3; // r8
  PVOID *v4; // rax
  PVOID *v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // edx
  PVOID Pa; // [rsp+30h] [rbp-10h] BYREF
  PVOID *p_Pa; // [rsp+38h] [rbp-8h]

  p_Pa = &Pa;
  Pa = &Pa;
  sub_14077572C(1);
  qword_140C467C0 = (__int64)KeGetCurrentThread();
  ExAcquireResourceExclusiveLite(&stru_140C46040, 1u);
  v2 = (PVOID **)qword_140C46130;
  if ( qword_140C46130 != &qword_140C46130 )
  {
    do
    {
      v3 = *v2;
      if ( *((_BYTE *)v2 + 104) )
      {
        if ( *((_DWORD *)*v2[8] + 2) == *(_DWORD *)*v2[8] )
        {
          if ( v3[1] != v2 || (v4 = v2[1], *v4 != v2) || (*v4 = v3, v3[1] = v4, v5 = p_Pa, *p_Pa != &Pa) )
LABEL_19:
            __fastfail(3u);
          v2[1] = p_Pa;
          *v2 = &Pa;
          *v5 = v2;
          p_Pa = (PVOID *)v2;
        }
        else
        {
          *((_BYTE *)v2 + 104) = 0;
        }
      }
      v2 = (PVOID **)v3;
    }
    while ( v3 != &qword_140C46130 );
  }
  byte_140C548D9 = 0;
  ExReleaseResourceLite(&stru_140C46040);
  while ( 1 )
  {
    v6 = Pa;
    if ( Pa == &Pa )
      break;
    if ( *((PVOID **)Pa + 1) != &Pa )
      goto LABEL_19;
    v7 = *(_QWORD *)Pa;
    if ( *(PVOID *)(*(_QWORD *)Pa + 8LL) != Pa )
      goto LABEL_19;
    Pa = *(PVOID *)Pa;
    *(_QWORD *)(v7 + 8) = &Pa;
    if ( P )
    {
      P[2] = v6;
      P[1] = v6[7];
      v8 = v6[7];
      if ( v8 )
        v9 = *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL);
      else
        v9 = 0LL;
      *P = v9;
      P[3] = sub_14074ECA8(3, (__int64)P);
    }
    sub_14080ED34(v6);
    if ( P )
    {
      v10 = P[3];
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 8);
        ExDeleteTimer(*(_QWORD *)(v11 + 56), 1, 1, 0LL);
        *(_QWORD *)(v11 + 56) = 0LL;
        if ( *(int *)(v11 + 96) > 0 )
          KeWaitForSingleObject((PVOID)(v11 + 104), Executive, 0, 0, 0LL);
        ExFreePoolWithTag((PVOID)v11, 0x54645750u);
        v12 = *(_DWORD *)(v10 + 16);
        *(_QWORD *)(v10 + 8) = 0LL;
        sub_14074ED04(0LL, v12);
        if ( *(_BYTE *)(v10 + 32) )
          sub_140950084(v10, 0LL);
        sub_1402D3C18((void *)v10);
        P[3] = 0LL;
      }
    }
  }
  qword_140C467C0 = 0LL;
  if ( P )
    ExFreePoolWithTag(P, 0x54706E50u);
  sub_140775698(1);
}
