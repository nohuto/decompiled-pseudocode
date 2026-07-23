/*
 * XREFs of sub_14068F5DC @ 0x14068F5DC
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_140AFD7A4 @ 0x140AFD7A4 (sub_140AFD7A4.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x14020C520 (MmIsThisAnNtAsSystem.c)
 *     sub_14020C7B0 @ 0x14020C7B0 (sub_14020C7B0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402EC4D0 @ 0x1402EC4D0 (sub_1402EC4D0.c)
 *     sub_14079D40C @ 0x14079D40C (sub_14079D40C.c)
 */

unsigned __int8 __fastcall sub_14068F5DC(char a1, char a2)
{
  unsigned int v3; // eax
  int v5; // eax
  char *v6; // rbx
  int v7; // edi
  unsigned __int8 result; // al
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v10; // rdx
  __int64 *i; // rbx
  char v12; // al
  __int64 v13; // r8

  v3 = a2 & 3;
  if ( v3 >= 2 )
    v3 = 2;
  dword_140D06AB0 = v3;
  v5 = a2 & 0xC;
  if ( v5 == 4 )
  {
    v6 = (char *)&dword_140A37DFC;
  }
  else if ( v5 == 8 )
  {
    v6 = byte_140A37D68;
  }
  else
  {
    v6 = byte_140A37D68;
    if ( !MmIsThisAnNtAsSystem() )
      v6 = (char *)&dword_140A37DFC;
  }
  v7 = a2 & 0x30;
  if ( v7 == 16 || v7 != 32 && MmIsThisAnNtAsSystem() )
    v6 += 3;
  word_140D3CBEC = *(_WORD *)v6;
  result = v6[2];
  byte_140D3CA06 = v6 == byte_140A37D6B;
  byte_140D3CBEE = result;
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140D3CAC8, 0LL);
    for ( i = (__int64 *)qword_140C1BF80; i != &qword_140C1BF80; i = (__int64 *)*i )
    {
      LOBYTE(v10) = *((_BYTE *)i + 754);
      v12 = sub_14079D40C(i - 137, v10);
      sub_1402EC4D0(v13, v12);
    }
    return (unsigned __int8)sub_14020C7B0((__int64)CurrentThread);
  }
  return result;
}
