/*
 * XREFs of sub_1C00A360C @ 0x1C00A360C
 * Callers:
 *     sub_1C0007860 @ 0x1C0007860 (sub_1C0007860.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C002069C @ 0x1C002069C (sub_1C002069C.c)
 *     sub_1C00206E4 @ 0x1C00206E4 (sub_1C00206E4.c)
 *     sub_1C00207BC @ 0x1C00207BC (sub_1C00207BC.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C00A25D0 @ 0x1C00A25D0 (sub_1C00A25D0.c)
 */

__int64 __fastcall sub_1C00A360C(__int64 a1, IRP *a2)
{
  unsigned int Length; // ebp
  wchar_t *v5; // rax
  int v6; // ebx
  wchar_t *v7; // rdi
  unsigned int v8; // r8d
  IRP *v9; // rcx
  char **v11; // rax
  __int64 v12; // rax
  _BYTE *v13; // r9
  _BYTE *v14; // rax
  _BYTE *v15; // r9
  _BYTE v16[16]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v17[24]; // [rsp+40h] [rbp-48h] BYREF

  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v5 = (wchar_t *)sub_1C0007CF4(256LL, 512LL, 1414619474LL, *(_QWORD *)(a1 + 8));
  v6 = 0;
  v7 = v5;
  if ( v5 )
  {
    if ( Length )
    {
      if ( Length == 1 )
      {
        sub_1C00207BC(
          v5,
          256LL,
          L"Bus Number %d, Target Id %d, LUN %d",
          *(unsigned __int8 *)(a1 + 96),
          *(unsigned __int8 *)(a1 + 97),
          *(unsigned __int8 *)(a1 + 98));
      }
      else
      {
        ExFreePoolWithTag(v5, 0x54516152u);
        v7 = 0LL;
        v6 = -1073741637;
      }
      goto LABEL_5;
    }
    if ( (*(_DWORD *)(a1 + 1872) & 1) != 0 )
    {
      sub_1C00207BC(v5, 256LL, L"VM passthrough LUN device");
    }
    else
    {
      sub_1C002069C((__int64 *)(a1 + 104), (__int64)v16);
      sub_1C00206E4(a1 + 104, (__int64)v17);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 568LL) + 184LL) & 0x10) == 0 )
      {
        if ( (*(_DWORD *)(a1 + 1872) & 0x20) != 0 )
        {
          sub_1C00207BC(v7, 256LL, L"NVMe %hs %hs Device", v17, "ZNSDisk");
        }
        else
        {
          v11 = sub_1C00A25D0(**(_BYTE **)(a1 + 104) & 0x1F);
          sub_1C00207BC(v7, 256LL, L"%hs %hs SCSI %hs Device", v16, v17, *v11);
        }
        goto LABEL_5;
      }
      v12 = *(_QWORD *)(a1 + 152);
      if ( v12 )
      {
        v13 = (_BYTE *)(v12 + 8);
        v14 = (_BYTE *)(v12 + 25);
        if ( !*v13 )
        {
          v15 = v14;
LABEL_22:
          sub_1C00207BC(v7, 256LL, L"%hs", v15);
          goto LABEL_5;
        }
      }
      else
      {
        v15 = *(_BYTE **)(a1 + 144);
        if ( v15 )
          goto LABEL_22;
        v14 = v17;
        v13 = v16;
      }
      sub_1C00207BC(v7, 256LL, L"%hs %hs", v13, v14);
    }
LABEL_5:
    a2->IoStatus.Information = (ULONG_PTR)v7;
    v8 = v6;
    v9 = a2;
    return sub_1C0003440(v9, 0, v8);
  }
  v9 = a2;
  if ( Length <= 1 )
    v8 = -1073741801;
  else
    v8 = -1073741637;
  return sub_1C0003440(v9, 0, v8);
}
