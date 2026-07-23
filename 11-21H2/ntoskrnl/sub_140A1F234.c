/*
 * XREFs of sub_140A1F234 @ 0x140A1F234
 * Callers:
 *     sub_140A1E590 @ 0x140A1E590 (sub_140A1E590.c)
 *     sub_140A1F9F4 @ 0x140A1F9F4 (sub_140A1F9F4.c)
 * Callees:
 *     sub_1408123B4 @ 0x1408123B4 (sub_1408123B4.c)
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140A1E0A0 @ 0x140A1E0A0 (sub_140A1E0A0.c)
 *     sub_140A1EE84 @ 0x140A1EE84 (sub_140A1EE84.c)
 *     sub_140A20438 @ 0x140A20438 (sub_140A20438.c)
 *     sub_140A210D4 @ 0x140A210D4 (sub_140A210D4.c)
 *     sub_140A212A0 @ 0x140A212A0 (sub_140A212A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A1F234(__int64 a1, __int64 a2)
{
  _BOOT_ENTRY *v3; // rdi
  int v5; // eax
  __int64 v6; // r14
  int v7; // ebx
  ULONG v8; // eax
  ULONG v9; // eax
  ULONG Id; // [rsp+68h] [rbp+38h] BYREF
  PVOID P; // [rsp+70h] [rbp+40h] BYREF
  void *v13; // [rsp+78h] [rbp+48h] BYREF

  Id = 0;
  v13 = 0LL;
  v3 = 0LL;
  P = 0LL;
  v5 = sub_140812B74(a1, (unsigned int *)(a2 + 16), &v13);
  v6 = (__int64)v13;
  v7 = v5;
  if ( v5 < 0 )
    goto LABEL_16;
  if ( (*(_DWORD *)(a2 + 48) & 2) == 0 )
  {
    v7 = sub_140A1EE84(v13, &P);
    if ( v7 >= 0 )
    {
      v3 = (_BOOT_ENTRY *)P;
      v7 = sub_140A1E0A0((PBOOT_ENTRY)P, &Id);
      if ( v7 >= 0 )
      {
        sub_1408138F0(2LL, L"Created new boot entry 0x%x", Id);
        v3->Id = Id;
        v9 = Id;
        *(_DWORD *)(a2 + 48) |= 0x21u;
        *(_DWORD *)(a2 + 32) = v9;
        *(_QWORD *)(a2 + 40) = v3;
        v7 = sub_1408123B4(v6, L"FirmwareVariable", (__int64)L"Description", 3u, v3, v3->Length);
        if ( v7 >= 0 )
        {
          *(_DWORD *)(a2 + 48) |= 2u;
          goto LABEL_17;
        }
      }
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  v7 = sub_140A20438(v13, &P);
  if ( v7 < 0 )
  {
LABEL_15:
    v3 = (_BOOT_ENTRY *)P;
    goto LABEL_16;
  }
  v3 = (_BOOT_ENTRY *)P;
  if ( (*(_DWORD *)(a2 + 48) & 8) == 0 )
  {
    v7 = sub_140A212A0(P, v6);
    if ( v7 >= 0 )
    {
      *(_DWORD *)(a2 + 48) |= 0x20u;
      goto LABEL_7;
    }
LABEL_16:
    sub_1408138F0(4LL, L"BiCreateEfiEntry failed %x", (unsigned int)v7);
    goto LABEL_17;
  }
LABEL_7:
  v7 = sub_140A1E0A0(v3, &Id);
  if ( v7 < 0 )
    goto LABEL_16;
  sub_1408138F0(2LL, L"Created boot entry 0x%x using cached variable", Id);
  v3->Id = Id;
  v8 = Id;
  *(_DWORD *)(a2 + 48) |= 1u;
  *(_DWORD *)(a2 + 32) = v8;
  *(_QWORD *)(a2 + 40) = v3;
  v7 = sub_1408123B4(v6, L"FirmwareVariable", (__int64)L"Description", 3u, v3, v3->Length);
  if ( v7 < 0 )
    goto LABEL_16;
  v7 = sub_140A210D4(a1, a2);
  if ( v7 < 0 )
    goto LABEL_16;
LABEL_17:
  if ( v6 )
    sub_140812D00(v6);
  if ( (*(_DWORD *)(a2 + 48) & 1) == 0 && v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  return (unsigned int)v7;
}
