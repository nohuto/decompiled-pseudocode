/*
 * XREFs of sub_14076BE08 @ 0x14076BE08
 * Callers:
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402DDEA0 @ 0x1402DDEA0 (sub_1402DDEA0.c)
 *     sub_1402DE254 @ 0x1402DE254 (sub_1402DE254.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1405643B8 @ 0x1405643B8 (sub_1405643B8.c)
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 *     sub_140749F30 @ 0x140749F30 (sub_140749F30.c)
 *     sub_14074C8DC @ 0x14074C8DC (sub_14074C8DC.c)
 *     sub_14076ABAC @ 0x14076ABAC (sub_14076ABAC.c)
 *     sub_14076AC70 @ 0x14076AC70 (sub_14076AC70.c)
 *     sub_14076C288 @ 0x14076C288 (sub_14076C288.c)
 *     sub_14076C4E0 @ 0x14076C4E0 (sub_14076C4E0.c)
 *     sub_14076C544 @ 0x14076C544 (sub_14076C544.c)
 *     sub_14076C764 @ 0x14076C764 (sub_14076C764.c)
 *     sub_14076E168 @ 0x14076E168 (sub_14076E168.c)
 *     sub_14076E894 @ 0x14076E894 (sub_14076E894.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_14076FE20 @ 0x14076FE20 (sub_14076FE20.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_140772044 @ 0x140772044 (sub_140772044.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_14078D510 @ 0x14078D510 (sub_14078D510.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     sub_14095BD0C @ 0x14095BD0C (sub_14095BD0C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14076BE08(__int64 a1, int a2, __int64 a3)
{
  int v3; // esi
  int v5; // ebx
  __int64 v6; // r8
  _QWORD *v7; // r15
  PVOID v8; // rcx
  PVOID v10; // rsi
  PVOID v11; // rbx
  char v12; // r14
  struct _KTHREAD *v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  PVOID v16; // rbx
  unsigned int v17; // r13d
  PVOID v18; // rsi
  unsigned int v19; // r12d
  int v20; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rcx
  int v23; // [rsp+20h] [rbp-59h]
  int v24; // [rsp+50h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-21h] BYREF
  int v26; // [rsp+60h] [rbp-19h] BYREF
  int v27; // [rsp+64h] [rbp-15h] BYREF
  unsigned int v28; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v29; // [rsp+6Ch] [rbp-Dh] BYREF
  PVOID v30; // [rsp+70h] [rbp-9h] BYREF
  PVOID P; // [rsp+78h] [rbp-1h] BYREF
  PVOID v32; // [rsp+80h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp+Fh] BYREF
  char v35; // [rsp+F0h] [rbp+77h] BYREF
  char v36; // [rsp+F8h] [rbp+7Fh]

  v3 = a2;
  Handle = 0LL;
  v32 = 0LL;
  if ( (byte_140C0DD4B & 0x10) != 0 )
    sub_1405643B8(a1, (const EVENT_DESCRIPTOR *)qword_14003B390, a3, 3, *(const wchar_t **)(a1 + 48));
  v5 = sub_140779DC4(&v32);
  if ( v5 >= 0 )
  {
    v7 = *(_QWORD **)(a1 + 32);
    if ( (*(_DWORD *)(a1 + 396) & 0x20) != 0
      || (v30 = 0LL, v28 = 0, P = 0LL, v29 = 0, DestinationString = 0LL, (int)sub_14076E894(v7, &Handle, 131097LL) < 0) )
    {
LABEL_5:
      if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 9 )
      {
        v5 = -1073741823;
      }
      else
      {
        if ( v3 )
          sub_14076FB70(a1, 8LL);
        sub_14076C4E0(a1);
        v5 = sub_140749F30(v7);
        sub_14076E168(a1, 0LL);
        sub_14076C288(&xmmword_1400109B0, *(_QWORD *)(a1 + 32));
        sub_1402DE254(a1);
        if ( v5 >= 0 )
        {
          sub_1402DDEA0();
          sub_1402DE844(a1, 778);
          sub_14076AC70(a1);
          sub_14076ABAC(a1);
          if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL) )
            sub_14095BD0C(a1 + 40);
          v5 = 0;
        }
      }
      goto LABEL_12;
    }
    sub_14074C8DC(a1, 1, &P, &v29);
    sub_14074C8DC(a1, 2, &v30, &v28);
    v10 = v30;
    v11 = P;
    sub_14078D510(P, v30, a1 + 684);
    if ( !v11 && !v10 )
    {
LABEL_38:
      sub_14077198C(
        qword_140D00AC0,
        *(_QWORD *)(a1 + 48),
        1,
        0LL,
        (__int64)qword_140010960,
        7,
        (__int64)&dword_140C54E94,
        4,
        0);
      RtlInitUnicodeString(&DestinationString, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
      RtlGUIDFromString(&DestinationString, (GUID *)(a1 + 664));
      sub_14076FB70(a1, 32LL);
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquireResourceSharedLite(&stru_140C462A0, 1u);
      sub_14076C764(*(_QWORD *)(a1 + 48), Handle, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
      ExReleaseResourceLite(&stru_140C462A0);
      KeLeaveCriticalRegion();
      sub_14076E168(a1, Handle);
      ZwClose(Handle);
      sub_140772044(v22, *(_QWORD *)(a1 + 48), 1LL);
      sub_14076C288(&qword_140010990, *(_QWORD *)(a1 + 32));
      v3 = a2;
      goto LABEL_5;
    }
    v24 = 0;
    v12 = 0;
    v26 = 0;
    v13 = KeGetCurrentThread();
    v35 = 0;
    v36 = 0;
    --*((_WORD *)v13 + 242);
    ExAcquireResourceSharedLite(&stru_140C462A0, 1u);
    v14 = *(_QWORD *)(a1 + 48);
    v27 = 4;
    if ( (int)sub_14077CD90(qword_140D00AC0, v14, (_DWORD)Handle, 11, (__int64)&v26, (__int64)&v24, (__int64)&v27, 0) >= 0
      && v26 == 4
      && v27 == 4 )
    {
      v15 = v24;
      if ( (v24 & 0x20) == 0 || (v24 & 1) != 0 )
        goto LABEL_23;
    }
    else
    {
      v15 = 0;
      v24 = 0;
    }
    v12 = 1;
LABEL_23:
    v16 = v30;
    v17 = v28;
    v18 = P;
    v19 = v29;
    if ( (v15 & 0x400) == 0 )
    {
      v20 = 0;
      if ( !P || (LOBYTE(v23) = 1, v20 = sub_14076C544(a1, Handle, P, v29, v23, &v35), v15 = v24, !v35) )
      {
        if ( v16 )
        {
          LOBYTE(v23) = 0;
          v20 = sub_14076C544(a1, Handle, v16, v17, v23, &v35);
          v15 = v24;
        }
      }
      if ( v20 >= 0 && v35 )
      {
        v36 = 1;
        v24 = v15 | 0x400;
        v12 = 1;
      }
    }
    if ( v18 )
    {
      sub_14076FE20(qword_140D00AC0, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 2, 7, (__int64)v18, v19, 0);
      ExFreePoolWithTag(v18, 0);
    }
    if ( v16 )
    {
      sub_14076FE20(qword_140D00AC0, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 3, 7, (__int64)v16, v17, 0);
      ExFreePoolWithTag(v16, 0);
    }
    if ( v36 )
      sub_14076FE20(qword_140D00AC0, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 11, 4, (__int64)&v24, 4, 0);
    ExReleaseResourceLite(&stru_140C462A0);
    KeLeaveCriticalRegion();
    if ( v12 && dword_140D3B050 )
      sub_140747740(a1, (__int64)Handle, 0);
    goto LABEL_38;
  }
LABEL_12:
  v8 = v32;
  if ( v32 )
    sub_140779A50(v32);
  if ( (byte_140C0DD4B & 0x10) != 0 )
    sub_1405643B8((__int64)v8, (const EVENT_DESCRIPTOR *)qword_14003B460, v6, 3, *(const wchar_t **)(a1 + 48));
  return (unsigned int)v5;
}
