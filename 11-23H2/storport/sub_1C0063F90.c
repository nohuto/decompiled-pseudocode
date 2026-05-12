/*
 * XREFs of sub_1C0063F90 @ 0x1C0063F90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0015A74 @ 0x1C0015A74 (sub_1C0015A74.c)
 *     sub_1C0018028 @ 0x1C0018028 (sub_1C0018028.c)
 *     sub_1C00201F4 @ 0x1C00201F4 (sub_1C00201F4.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C004FFE8 @ 0x1C004FFE8 (sub_1C004FFE8.c)
 *     sub_1C00682AC @ 0x1C00682AC (sub_1C00682AC.c)
 */

__int64 __fastcall sub_1C0063F90(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rax
  int v6; // ecx
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int v10; // r8d
  int v11; // eax
  char v12; // al
  int *v13; // rdx
  int v14; // r8d
  int v15; // esi
  int v16; // ebp
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // edi
  __int128 v21; // [rsp+40h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a2 + 184) - 72LL;
  v6 = *(_DWORD *)v2;
  v7 = 0LL;
  --*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) = v4;
  v21 = 0LL;
  *(_QWORD *)(v4 + 40) = a1;
  v8 = *(_QWORD *)(a2 + 184);
  v9 = *(_QWORD *)(v8 + 8);
  if ( v6 != 1431193940 )
  {
    *(_QWORD *)(a2 + 56) = 0LL;
LABEL_3:
    v10 = -1073741823;
LABEL_4:
    v11 = sub_1C0003440((PIRP)a2, 0, v10);
    goto LABEL_45;
  }
  if ( *(_BYTE *)v8 != 15 || !v9 )
  {
    *(_QWORD *)(a2 + 56) = 0LL;
LABEL_7:
    v10 = -1073741811;
    goto LABEL_4;
  }
  v12 = *(_BYTE *)(v9 + 2);
  v13 = (int *)(v9 + 24);
  if ( v12 == 40 )
    v14 = *v13;
  else
    v14 = *(_DWORD *)(v9 + 12);
  if ( (v14 & 0x4000) == 0 )
  {
LABEL_13:
    *(_QWORD *)(a2 + 56) = 0LL;
    goto LABEL_7;
  }
  if ( v12 == 40 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(v2 + 24) + 442LL) != 1 )
    {
      *(_BYTE *)(v9 + 3) = 6;
      v10 = -1073741637;
      *(_QWORD *)(a2 + 56) = 0LL;
      goto LABEL_4;
    }
    v7 = v9;
    v15 = *(_DWORD *)(v9 + 20);
    if ( *(_DWORD *)(v9 + 8) != 1397899864 || *(_DWORD *)(v9 + 48) || *(_QWORD *)(v9 + 72) )
    {
      *(_BYTE *)(v9 + 3) = 6;
      goto LABEL_13;
    }
  }
  else
  {
    v15 = *(unsigned __int8 *)(v9 + 2);
    v13 = (int *)(v9 + 12);
  }
  v16 = *v13;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 8) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4((__int64)off_1C0093070->AttachedDevice, 0x4Au, (__int64)&unk_1C0083530, v2, a2, v15);
  }
  if ( (v16 & 0x100000) != 0 )
  {
    if ( (v17 = *(_QWORD *)(v2 + 24), (v18 = *(_QWORD *)(v17 + 4896)) != 0) && (*(_DWORD *)(v18 + 20) & 1) == 0
      || (*(_BYTE *)(v17 + 107) & 4) != 0
      || *(_DWORD *)(v17 + 308) != 1 )
    {
      *(_BYTE *)(v9 + 3) = 36;
LABEL_32:
      *(_QWORD *)(a2 + 56) = 0LL;
      goto LABEL_3;
    }
  }
  if ( v15 )
    goto LABEL_34;
  if ( *(_BYTE *)(v9 + 2) == 40 )
    sub_1C0018028(v7, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !(unsigned int)sub_1C0015A74() )
  {
LABEL_34:
    *(_BYTE *)(v9 + 3) = 6;
    goto LABEL_32;
  }
  if ( byte_1C0093BE8
    && ((byte_1C0093A01 & 8) != 0
     || (byte_1C0093A01 & 0x10) != 0
     || (byte_1C0093A01 & 2) != 0
     || (byte_1C0093A01 & 4) != 0) )
  {
    IoGetActivityIdIrp(a2, &v21);
    sub_1C00682AC(a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v11 = sub_1C00201F4(v2, a2);
LABEL_45:
  v19 = v11;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 8) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C004FFE8((__int64)off_1C0093070->AttachedDevice, 0x4Bu, (__int64)&unk_1C0083530, a1, v2, a2, v11);
  }
  return v19;
}
