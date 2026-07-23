/*
 * XREFs of sub_140A68674 @ 0x140A68674
 * Callers:
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 *     sub_140A69140 @ 0x140A69140 (sub_140A69140.c)
 * Callees:
 *     sub_1407FE79C @ 0x1407FE79C (sub_1407FE79C.c)
 *     sub_1407FE7DC @ 0x1407FE7DC (sub_1407FE7DC.c)
 *     sub_140802640 @ 0x140802640 (sub_140802640.c)
 *     sub_14098FDA8 @ 0x14098FDA8 (sub_14098FDA8.c)
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 *     sub_140A67C14 @ 0x140A67C14 (sub_140A67C14.c)
 */

__int64 __fastcall sub_140A68674(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax

  *(_DWORD *)(qword_140C448A8 + 33312) = sub_140A67C14(0);
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)a1 = -2013265920;
  *(_DWORD *)(a1 + 48) = -2013265920;
  *(_DWORD *)(a1 + 40) = 2;
  *(_DWORD *)(a1 + 44) = 5;
  *(_DWORD *)(a1 + 32) = sub_1407FE7DC(a1 + 36);
  v2 = sub_1407FE79C(a1 + 36);
  if ( v2 >= 0 )
  {
    sub_14098FDA8((_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 32));
    *(_DWORD *)(a1 + 8) = 5;
    *(_DWORD *)(a1 + 16) = 1;
    *(_DWORD *)(a1 + 4) = 1;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)a1;
    *(_DWORD *)(a1 + 12) = 5;
    *(_DWORD *)(a1 + 20) = 2;
    v2 = sub_140802640();
    if ( v2 >= 0 )
    {
      *(_BYTE *)(a1 + 30) = 3;
      sub_140A4A768(a1 + 4, v6, v7, v8);
      *(_BYTE *)(a1 + 30) = 2;
      v2 = sub_140A4A768(a1 + 4, v10, v11, v12);
      if ( v2 >= 0 )
        goto LABEL_16;
      v9 = 2005;
    }
    else
    {
      v9 = 1987;
    }
    v13 = qword_140C448A8;
    v14 = *(_DWORD *)(qword_140C448A8 + 33272);
    if ( !v14 )
      v14 = v9;
    *(_DWORD *)(qword_140C448A8 + 33272) = v14;
    v15 = *(_DWORD *)(v13 + 33276);
    if ( !v15 )
      v15 = 7;
    *(_DWORD *)(v13 + 33276) = v15;
  }
  else
  {
    v3 = qword_140C448A8;
    v4 = *(_DWORD *)(qword_140C448A8 + 33272);
    if ( !v4 )
      v4 = 1964;
    v5 = *(_DWORD *)(qword_140C448A8 + 33276);
    *(_DWORD *)(qword_140C448A8 + 33272) = v4;
    if ( !v5 )
      v5 = 7;
    *(_DWORD *)(v3 + 33276) = v5;
  }
LABEL_16:
  *(_DWORD *)(qword_140C448A8 + 33316) = sub_140A67C14(0);
  return (unsigned int)v2;
}
