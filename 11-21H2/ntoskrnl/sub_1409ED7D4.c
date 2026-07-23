/*
 * XREFs of sub_1409ED7D4 @ 0x1409ED7D4
 * Callers:
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1406EF170 @ 0x1406EF170 (sub_1406EF170.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14079435C @ 0x14079435C (sub_14079435C.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     sub_1409EC988 @ 0x1409EC988 (sub_1409EC988.c)
 *     sub_1409ECCCC @ 0x1409ECCCC (sub_1409ECCCC.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409ED7D4(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v5; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // rdi
  __int64 Pool2; // rax
  char v12; // [rsp+20h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-40h] BYREF
  __int128 v14; // [rsp+38h] [rbp-30h] BYREF

  DestinationString = 0LL;
  v14 = 0LL;
  if ( !qword_140D3CE38 || PsIsCurrentThreadInServerSilo() )
    return 3221225659LL;
  if ( a2 < 0x18 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  *((_QWORD *)&v14 + 1) = a1 + 18;
  LOWORD(v14) = a2 - 18;
  WORD1(v14) = a2 - 18;
  if ( (_WORD)a2 == 18 || (result = sub_1406EF170((unsigned __int16 *)&v14, &DestinationString), (int)result >= 0) )
  {
    v12 = *(_BYTE *)(a1 + 16);
    v5 = (unsigned __int16)*(_QWORD *)(a1 + 8);
    if ( v5 == 0xFFFF )
      v5 = *(unsigned __int8 *)(qword_140D05008 + 4232);
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v7 = sub_140797594(qword_140D05008, v5, 1);
    v8 = v7;
    if ( !v7 )
    {
      v9 = -1073741162;
      goto LABEL_32;
    }
    v9 = sub_14079435C(0x80u, v7);
    if ( v9 >= 0 )
    {
      v10 = *(_QWORD *)(v8 + 1088);
      if ( !v12 )
      {
        if ( v10 && *(_BYTE *)(v10 + 32) )
        {
          sub_1409EC988(v8);
          RtlFreeUnicodeString((PUNICODE_STRING)(v10 + 16));
          *(_BYTE *)(v10 + 32) = 0;
          v9 = 0;
        }
        else
        {
          v9 = -1073741054;
        }
        goto LABEL_32;
      }
      if ( !v10 )
      {
        Pool2 = ExAllocatePool2(256LL, 40LL, 1266119749LL);
        v10 = Pool2;
        if ( !Pool2 )
        {
          v9 = -1073741801;
          goto LABEL_32;
        }
        *(_QWORD *)(v8 + 1088) = Pool2;
      }
      if ( *(_BYTE *)(v10 + 32) )
      {
        v9 = -1073741053;
      }
      else if ( DestinationString.Length )
      {
        if ( (*(_DWORD *)(v8 + 12) & 0x400) == 0 || *(_DWORD *)(v8 + 300) == 1 || (*(_DWORD *)(v8 + 4) & 0xFFF) != 0 )
        {
          v9 = -1073741637;
        }
        else
        {
          *(UNICODE_STRING *)(v10 + 16) = DestinationString;
          DestinationString.Buffer = 0LL;
          *(_BYTE *)(v10 + 32) = 1;
          v9 = 0;
          if ( byte_140D3CA34 )
          {
            v9 = sub_1409ECCCC(v8);
            if ( v9 < 0 )
            {
              *(_BYTE *)(v10 + 32) = 0;
              RtlFreeUnicodeString((PUNICODE_STRING)(v10 + 16));
            }
          }
        }
      }
      else
      {
        v9 = -1073741672;
      }
    }
LABEL_32:
    if ( v8 )
      sub_1407981E8((unsigned int *)v8, 1);
    RtlFreeUnicodeString(&DestinationString);
    sub_1402F9540((__int64)KeGetCurrentThread());
    return (unsigned int)v9;
  }
  return result;
}
