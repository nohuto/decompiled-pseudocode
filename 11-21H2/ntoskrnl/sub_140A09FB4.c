/*
 * XREFs of sub_140A09FB4 @ 0x140A09FB4
 * Callers:
 *     sub_140A0A2E8 @ 0x140A0A2E8 (sub_140A0A2E8.c)
 * Callees:
 *     MmGetPageBadStatus @ 0x14058F140 (MmGetPageBadStatus.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A08CB0 (WheaAttemptPhysicalPageOffline.c)
 *     sub_140A09F1C @ 0x140A09F1C (sub_140A09F1C.c)
 *     sub_140A0A238 @ 0x140A0A238 (sub_140A0A238.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_140A09FB4(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rsi
  char *Pool2; // rbx
  unsigned int v6; // ecx
  PVOID *v7; // rax
  PVOID *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  bool v11; // cf
  _QWORD *v12; // rax
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = a1;
  if ( !byte_140D04C98 && (*(_BYTE *)a2 & 2) != 0 )
  {
    v2 = *(_QWORD *)(a2 + 16);
    v13 = v2;
    if ( !(unsigned int)MmGetPageBadStatus(&v13) )
    {
      v3 = v2 >> 12;
      v4 = MEMORY[0xFFFFF78000000008];
      sub_140A0A238(MEMORY[0xFFFFF78000000008]);
      Pool2 = (char *)qword_140D01098;
      v6 = 0;
      if ( qword_140D01098 == &qword_140D01098 )
      {
LABEL_7:
        if ( v6 >= dword_140C0C8C0 )
        {
          Pool2 = (char *)qword_140D010A0;
          v9 = *(_QWORD *)qword_140D010A0;
          if ( *(_QWORD *)(*(_QWORD *)qword_140D010A0 + 8LL) != qword_140D010A0 )
            goto LABEL_21;
          v10 = *(_QWORD **)(qword_140D010A0 + 8);
          if ( *v10 != qword_140D010A0 )
            goto LABEL_21;
          *v10 = v9;
          *(_QWORD *)(v9 + 8) = v10;
          sub_140A09F1C((__int64)Pool2, 3, v4);
        }
        else
        {
          Pool2 = (char *)ExAllocatePool2(258LL, 48LL, 1634035799LL);
          if ( !Pool2 )
            return;
        }
        *(_QWORD *)Pool2 = 0LL;
        *((_QWORD *)Pool2 + 1) = 0LL;
        *(_DWORD *)(Pool2 + 18) = 0;
        *((_WORD *)Pool2 + 11) = 0;
        *((_WORD *)Pool2 + 8) = 0;
        *((_QWORD *)Pool2 + 3) = v4;
        *((_QWORD *)Pool2 + 5) = v3;
      }
      else
      {
        while ( 1 )
        {
          v7 = *(PVOID **)Pool2;
          if ( *((_QWORD *)Pool2 + 5) == v3 )
            break;
          ++v6;
          Pool2 = *(char **)Pool2;
          if ( v7 == &qword_140D01098 )
            goto LABEL_7;
        }
        if ( v7[1] != Pool2 )
          goto LABEL_21;
        v8 = (PVOID *)*((_QWORD *)Pool2 + 1);
        if ( *v8 != Pool2 )
          goto LABEL_21;
        *v8 = v7;
        v7[1] = v8;
      }
      v11 = (unsigned __int16)++*((_WORD *)Pool2 + 8) < (unsigned int)dword_140C0C8D0;
      *((_QWORD *)Pool2 + 4) = v4;
      if ( v11 )
      {
        v12 = qword_140D01098;
        if ( *((PVOID **)qword_140D01098 + 1) == &qword_140D01098 )
        {
          *(_QWORD *)Pool2 = qword_140D01098;
          *((_QWORD *)Pool2 + 1) = &qword_140D01098;
          v12[1] = Pool2;
          qword_140D01098 = Pool2;
          return;
        }
LABEL_21:
        __fastfail(3u);
      }
      sub_140A09F1C((__int64)Pool2, 1, v4);
      WheaAttemptPhysicalPageOffline(v3, 0, 0, 0);
      ExFreePoolWithTag(Pool2, 0x61656857u);
    }
  }
}
