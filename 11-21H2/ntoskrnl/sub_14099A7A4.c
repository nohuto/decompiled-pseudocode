/*
 * XREFs of sub_14099A7A4 @ 0x14099A7A4
 * Callers:
 *     sub_140864680 @ 0x140864680 (sub_140864680.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void sub_14099A7A4()
{
  __int64 v0; // rdi
  unsigned int v1; // eax
  ULONG v2; // esi
  __int64 Pool2; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v5; // r9d
  _DWORD *v6; // r8
  int v7; // edx
  __int64 v8; // r11
  struct _EVENT_DATA_DESCRIPTOR *v9; // rcx
  const wchar_t *v10; // r10
  int v11; // eax
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  if ( byte_140C5AE30 && EtwEventEnabled(qword_140C1F580, &stru_140039330) )
  {
    v0 = qword_140D068A8;
    v1 = qword_140D068A8 ? *(_DWORD *)qword_140D068A8 : 0;
    v12 = v1;
    v2 = 2 * v1 + 1;
    Pool2 = ExAllocatePool2(256LL, 16 * v2 + 12 * v1, 1699565648LL);
    UserData = (struct _EVENT_DATA_DESCRIPTOR *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 12) = 0;
      v5 = 0;
      v6 = (_DWORD *)(Pool2 + 16LL * v2);
      *(_DWORD *)(Pool2 + 8) = 4;
      for ( *(_QWORD *)Pool2 = &v12; v5 < v12; UserData[v7 + 2].Reserved = 0 )
      {
        v7 = 2 * v5;
        v8 = 448LL * v5;
        v9 = &UserData[2 * v5 + 1];
        *v6 = *(_DWORD *)(v8 + v0 + 72);
        v6[1] = *(_DWORD *)(v8 + v0 + 76);
        v6[2] = *(unsigned __int8 *)(v8 + v0 + 121);
        v9->Reserved = 0;
        v9->Ptr = (ULONGLONG)v6;
        v9->Size = 12;
        v10 = *(const wchar_t **)(v8 + v0 + 400);
        if ( v10 )
        {
          v11 = *(unsigned __int16 *)(v8 + v0 + 394);
        }
        else
        {
          v11 = 28;
          v10 = L"<unspecified>";
        }
        UserData[v7 + 2].Ptr = (ULONGLONG)v10;
        v6 += 3;
        UserData[v7 + 2].Size = v11;
        ++v5;
      }
      EtwWrite(qword_140C1F580, &stru_140039330, 0LL, v2, UserData);
      ExFreePoolWithTag(UserData, 0x654D5050u);
    }
  }
}
