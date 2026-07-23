/*
 * XREFs of sub_14024C370 @ 0x14024C370
 * Callers:
 *     sub_14024A5B4 @ 0x14024A5B4 (sub_14024A5B4.c)
 *     sub_140256F58 @ 0x140256F58 (sub_140256F58.c)
 *     sub_1402A4E10 @ 0x1402A4E10 (sub_1402A4E10.c)
 *     sub_1404173E4 @ 0x1404173E4 (sub_1404173E4.c)
 *     sub_14092EA08 @ 0x14092EA08 (sub_14092EA08.c)
 * Callees:
 *     FsRtlSendModernAppTermination @ 0x14024C440 (FsRtlSendModernAppTermination.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void __fastcall sub_14024C370(__int64 a1, __int64 a2)
{
  char v2; // bp
  ULONG v4; // edi
  int *PoolWithTag; // rbx
  _QWORD *v6; // rsi
  unsigned int v7; // edx
  _QWORD *i; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // [rsp+38h] [rbp+10h] BYREF
  int v12; // [rsp+3Ch] [rbp+14h]

  v2 = 0;
  if ( a2 || (v10 = *(_QWORD *)(a1 + 16)) == 0 )
  {
    v4 = 4096;
    PoolWithTag = (int *)ExAllocatePoolWithTag((POOL_TYPE)1025, 0x1000uLL, 0x74725346u);
    if ( PoolWithTag )
    {
      v6 = (_QWORD *)(a1 + 72);
      v2 = 1;
      v7 = 1;
      for ( i = (_QWORD *)*v6; ; i = (_QWORD *)*i )
      {
        if ( i == v6 )
        {
          *PoolWithTag = v7 - 1;
          goto LABEL_6;
        }
        if ( v7 >= 0x400 )
          break;
        v9 = v7++;
        PoolWithTag[v9] = *(_DWORD *)(i[4] + 1088LL);
      }
      memset(PoolWithTag + 1, 0, 0xFFCuLL);
      *PoolWithTag = -1;
    }
    else
    {
      v11 = -1;
      PoolWithTag = &v11;
      v12 = 0;
    }
    v4 = 4;
  }
  else
  {
    v11 = 1;
    PoolWithTag = &v11;
    v4 = 8;
    v12 = *(_DWORD *)(v10 + 1088);
  }
LABEL_6:
  FsRtlSendModernAppTermination(PoolWithTag, v4);
  if ( v2 )
    ExFreePoolWithTag(PoolWithTag, 0);
}
