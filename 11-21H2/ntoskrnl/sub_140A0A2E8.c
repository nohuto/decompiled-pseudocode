/*
 * XREFs of sub_140A0A2E8 @ 0x140A0A2E8
 * Callers:
 *     sub_140644030 @ 0x140644030 (sub_140644030.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A08CB0 (WheaAttemptPhysicalPageOffline.c)
 *     sub_140A09FB4 @ 0x140A09FB4 (sub_140A09FB4.c)
 */

__int64 __fastcall sub_140A0A2E8(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  char v4; // r9
  unsigned int v5; // edx
  unsigned int *v6; // rcx
  unsigned int *v7; // r10
  unsigned int *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  signed __int8 v12; // cf
  __int64 v13; // rbx

  v1 = a1 + 40;
  result = PshedDoPfa(a1 + 40);
  if ( (_DWORD)result != 1
    && !byte_140D04C99
    && byte_140CE1AD5
    && *(_WORD *)(v1 + 10)
    && *(_DWORD *)(v1 + 12) == 2
    && (*(_BYTE *)(v1 + 104) & 1) == 0 )
  {
    v4 = 0;
    v5 = 0;
    v6 = (unsigned int *)(v1 + 128);
    while ( 1 )
    {
      v7 = v6;
      if ( (v6[3] & 1) != 0 )
        break;
      ++v5;
      v6 += 18;
      if ( v5 >= *(unsigned __int16 *)(v1 + 10) )
        goto LABEL_13;
    }
    v4 = 1;
LABEL_13:
    v8 = (unsigned int *)(v1 + 128);
    if ( v4 )
      v8 = v7;
    result = *((_QWORD *)v8 + 2) - 0x4EDE6F64A5BC1114LL;
    if ( *((_QWORD *)v8 + 2) == 0x4EDE6F64A5BC1114LL )
      result = *((_QWORD *)v8 + 3) + 0x4E7C83127CC19C48LL;
    if ( !result )
    {
      result = *(unsigned int *)(a1 + 24);
      v9 = v1 + *v8;
      if ( (result & 4) != 0 )
      {
        if ( (result & 8) != 0 && (*(_BYTE *)v9 & 2) != 0 )
          return WheaAttemptPhysicalPageOffline(*(_QWORD *)(v9 + 16) >> 12, 1, 0, 0);
      }
      else
      {
        v10 = sub_140347C10((__int64)&qword_140D01090, 0LL);
        v12 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140D01090, 0LL);
        v13 = v10;
        if ( v12 )
          sub_14029F120(&qword_140D01090, v10, (__int64)&qword_140D01090);
        if ( v13 )
          *(_BYTE *)(v13 + 18) = 1;
        sub_140A09FB4(v11, v9);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D01090, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140D01090);
        return sub_1402AFC00((ULONG_PTR)&qword_140D01090);
      }
    }
  }
  return result;
}
