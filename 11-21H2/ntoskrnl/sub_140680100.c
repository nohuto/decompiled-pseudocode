/*
 * XREFs of sub_140680100 @ 0x140680100
 * Callers:
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140208AD8 @ 0x140208AD8 (sub_140208AD8.c)
 *     sub_140208C24 @ 0x140208C24 (sub_140208C24.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140657950 @ 0x140657950 (sub_140657950.c)
 *     sub_14068038C @ 0x14068038C (sub_14068038C.c)
 *     sub_140720F74 @ 0x140720F74 (sub_140720F74.c)
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_1407C0690 @ 0x1407C0690 (sub_1407C0690.c)
 *     sub_1407C4930 @ 0x1407C4930 (sub_1407C4930.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 */

__int64 __fastcall sub_140680100(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned __int16 *a5,
        __int64 a6,
        UNICODE_STRING *a7)
{
  bool v11; // zf
  unsigned int v12; // ebx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rbx
  unsigned int v19; // eax
  SIZE_T v20; // rbp
  __int64 v21; // rdi
  int v22; // eax
  int v23; // eax
  UNICODE_STRING *v24; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  __int128 v27; // [rsp+30h] [rbp-38h] BYREF
  PPRIVILEGE_SET v28[2]; // [rsp+40h] [rbp-28h]
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp+8h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = *(_DWORD *)(a1 + 40) == -1;
  v27 = 0LL;
  WORD1(v27) = -1;
  Privileges = 0LL;
  *(_OWORD *)v28 = 0LL;
  if ( !v11 )
  {
    v12 = -1073741199;
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4112LL) & 0x2000) == 0 )
  {
    v12 = -1073741199;
    goto LABEL_28;
  }
  if ( !a4 )
    goto LABEL_12;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 72) + 65LL) )
  {
    v12 = -1073741199;
    goto LABEL_28;
  }
  v13 = sub_140721CE0(a3, (unsigned __int16)(*(_WORD *)(a1 + 66) - 1));
  v14 = sub_1407C05F4(&v27, v13);
  v12 = v14;
  if ( v14 >= 0 )
  {
    if ( (unsigned __int8)sub_140720F74(&v27, 0LL) )
    {
      v12 = -1073741199;
      goto LABEL_28;
    }
LABEL_12:
    v18 = sub_140721CE0(a2, (unsigned __int16)(*(_WORD *)(a1 + 66) - 1));
    v19 = sub_1407C4930(v18);
    v20 = v19;
    if ( v19 <= 0xFFFF )
    {
      v21 = a6;
      if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
      {
        sub_140AB4550(a6 + 168);
        *(_DWORD *)(v21 + 160) |= 1u;
      }
      if ( a4 )
      {
        v22 = sub_1407C0690(*(_QWORD *)(v18 + 72), &Privileges);
        v12 = v22;
        if ( v22 < 0 )
        {
          v16 = (unsigned int)v22;
          v17 = 66048LL;
          v15 = v21;
          goto LABEL_27;
        }
      }
      else
      {
        v23 = sub_1407C0690(v18, &Privileges);
        v12 = v23;
        if ( v23 < 0 )
        {
          v16 = (unsigned int)v23;
          v17 = 66304LL;
          v15 = v21;
          goto LABEL_27;
        }
      }
      DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v20, 0x36364D43u);
      if ( !DestinationString.Buffer )
      {
        v12 = -1073741670;
        sub_14068038C(v21, 66560LL, 3221225626LL);
        goto LABEL_30;
      }
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v20;
      sub_140208AD8(&DestinationString, (unsigned __int16 *)Privileges);
      if ( a4 )
      {
        sub_140657950(&DestinationString.Length);
        sub_140208C24(&DestinationString, a5);
      }
      v24 = a7;
      ExFreePoolWithTag(a7->Buffer, 0);
      *v24 = DestinationString;
      RtlInitUnicodeString(&DestinationString, 0LL);
      *(_DWORD *)(v21 + 24) |= 0x10u;
      v17 = 66816LL;
      v15 = v21;
      v12 = 872;
    }
    else
    {
      v15 = a6;
      v12 = -1073741811;
      v17 = 65872LL;
    }
    v16 = v12;
    goto LABEL_27;
  }
  v15 = a6;
  v16 = (unsigned int)v14;
  v17 = 65792LL;
LABEL_27:
  sub_14068038C(v15, v17, v16);
LABEL_28:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
LABEL_30:
  if ( Privileges )
    SeFreePrivileges(Privileges);
  if ( v28[1] )
    SeFreePrivileges(v28[1]);
  return v12;
}
