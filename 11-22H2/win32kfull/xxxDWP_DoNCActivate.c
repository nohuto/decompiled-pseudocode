/*
 * XREFs of xxxDWP_DoNCActivate @ 0x1C00C9228
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C0213C50 (xxxEndMenuLoop.c)
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxDrawCaptionBar @ 0x1C00C689C (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C00C6A7C (GetWindowBorders.c)
 *     IsModelessMenuNotificationWindow @ 0x1C00C8BE4 (IsModelessMenuNotificationWindow.c)
 *     DwmAsyncActivationChange @ 0x1C00C93B4 (DwmAsyncActivationChange.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00D3B08 (IsToplevelWindowDesktopComposed.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     xxxMenuBarDraw @ 0x1C0235E48 (xxxMenuBarDraw.c)
 */

/*
 * Hex-Rays decompilation failed for xxxDWP_DoNCActivate @ 0x1C00C9228
 * Reason: Hex-Rays returned no pseudocode for 0x1C00C9228
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00C9228: mov     rax, rsp
 * 00000001C00C922B: mov     [rax+8], rbx
 * 00000001C00C922F: mov     [rax+10h], rbp
 * 00000001C00C9233: mov     [rax+18h], rsi
 * 00000001C00C9237: mov     [rax+20h], rdi
 * 00000001C00C923B: push    r12
 * 00000001C00C923D: push    r14
 * 00000001C00C923F: push    r15
 * 00000001C00C9241: sub     rsp, 20h
 * 00000001C00C9245: mov     r14d, edx
 * 00000001C00C9248: xor     r12d, r12d
 * 00000001C00C924B: mov     ebp, 100Ch
 * 00000001C00C9250: mov     rsi, r8
 * 00000001C00C9253: mov     rbx, rcx
 * 00000001C00C9256: mov     r15d, ebp
 * 00000001C00C9259: and     r14d, 1
 * 00000001C00C925D: jnz     loc_1C00C939C
 * 00000001C00C9263: test    dl, 2
 * 00000001C00C9266: jnz     short loc_1C00C9275
 * 00000001C00C9268: call    IsModelessMenuNotificationWindow
 * 00000001C00C926D: test    eax, eax
 * 00000001C00C926F: jnz     loc_1C00C939C
 * 00000001C00C9275: mov     ecx, r12d
 * 00000001C00C9278: mov     r8d, 40h ; '@'
 * 00000001C00C927E: mov     rdx, rbx
 * 00000001C00C9281: lea     r9d, [r8-3Fh]
 * 00000001C00C9285: call    SetOrClrWF
 * 00000001C00C928A: cmp     rsi, 0FFFFFFFFFFFFFFFFh
 * 00000001C00C928E: jnz     short loc_1C00C92E3
 * 00000001C00C9290: mov     rcx, rbx
 * 00000001C00C9293: call    IsToplevelWindowDesktopComposed
 * 00000001C00C9298: test    eax, eax
 * 00000001C00C929A: jz      short loc_1C00C92C3
 * 00000001C00C929C: mov     rax, [rbx+28h]
 * 00000001C00C92A0: test    byte ptr [rax+1Ah], 8
 * 00000001C00C92A4: jz      short loc_1C00C92C3
 * 00000001C00C92A6: mov     rbx, [rbx]
 * 00000001C00C92A9: call    cs:__imp_ReferenceDwmApiPort
 * 00000001C00C92B0: nop     dword ptr [rax+rax+00h]
 * 00000001C00C92B5: mov     r8d, r14d
 * 00000001C00C92B8: mov     rdx, rbx
 * 00000001C00C92BB: mov     rcx, rax; Object
 * 00000001C00C92BE: call    DwmAsyncActivationChange
 * 00000001C00C92C3: mov     rbx, [rsp+38h+arg_0]
 * 00000001C00C92C8: mov     rbp, [rsp+38h+arg_8]
 * 00000001C00C92CD: mov     rsi, [rsp+38h+arg_10]
 * 00000001C00C92D2: mov     rdi, [rsp+38h+arg_18]
 * 00000001C00C92D7: add     rsp, 20h
 * 00000001C00C92DB: pop     r15
 * 00000001C00C92DD: pop     r14
 * 00000001C00C92DF: pop     r12
 * 00000001C00C92E1: retn
 * 00000001C00C92E3: mov     rdx, [rbx+28h]
 * 00000001C00C92E7: mov     r8b, [rdx+1Fh]
 * 00000001C00C92EB: test    r8b, 10h
 * 00000001C00C92EF: jz      short loc_1C00C9290
 * 00000001C00C92F1: test    byte ptr [rdx+11h], 1
 * 00000001C00C92F5: jnz     short loc_1C00C9290
 * 00000001C00C92F7: mov     rax, cs:__imp_gpsi
 * 00000001C00C92FE: movzx   edi, r12w
 * 00000001C00C9302: mov     rcx, [rax]
 * 00000001C00C9305: mov     eax, [rcx+11E4h]
 * 00000001C00C930B: cmp     [rcx+11E0h], eax
 * 00000001C00C9311: jz      loc_1C0190326
 * 00000001C00C9317: mov     edi, ebp
 * 00000001C00C9319: test    r8b, 20h
 * 00000001C00C931D: jnz     short loc_1C00C9329
 * 00000001C00C931F: test    byte ptr [rdx+1Eh], 4
 * 00000001C00C9323: jnz     loc_1C019033D
 * 00000001C00C9329: test    di, di
 * 00000001C00C932C: jz      loc_1C00C9290
 * 00000001C00C9332: mov     rcx, rsi
 * 00000001C00C9335: call    cs:__imp_UserValidateCopyRgn
 * 00000001C00C933C: nop     dword ptr [rax+rax+00h]
 * 00000001C00C9341: mov     r8d, 10001h
 * 00000001C00C9347: mov     rcx, rbx
 * 00000001C00C934A: mov     rdx, rax
 * 00000001C00C934D: mov     rbp, rax
 * 00000001C00C9350: call    cs:__imp__GetDCEx
 * 00000001C00C9357: nop     dword ptr [rax+rax+00h]
 * 00000001C00C935C: mov     rsi, rax
 * 00000001C00C935F: test    rax, rax
 * 00000001C00C9362: jz      loc_1C019037E
 * 00000001C00C9368: mov     rax, [rbx+28h]
 * 00000001C00C936C: test    byte ptr [rax+10h], 1
 * 00000001C00C9370: jnz     loc_1C019035C
 * 00000001C00C9376: movzx   r8d, di
 * 00000001C00C937A: mov     rdx, rsi
 * 00000001C00C937D: or      r8d, r15d
 * 00000001C00C9380: mov     rcx, rbx
 * 00000001C00C9383: call    xxxDrawCaptionBar
 * 00000001C00C9388: mov     rcx, rsi
 * 00000001C00C938B: call    cs:__imp__ReleaseDC
 * 00000001C00C9392: nop     dword ptr [rax+rax+00h]
 * 00000001C00C9397: jmp     loc_1C00C9290
 * 00000001C00C939C: mov     ecx, 1
 * 00000001C00C93A1: mov     r15d, 100Dh
 * 00000001C00C93A7: jmp     loc_1C00C9278
 * 00000001C0190326: mov     eax, [rcx+1224h]
 * 00000001C019032C: cmp     [rcx+11FCh], eax
 * 00000001C0190332: jz      loc_1C00C9319
 * 00000001C0190338: jmp     loc_1C00C9317
 * 00000001C019033D: mov     eax, [rcx+1204h]
 * 00000001C0190343: cmp     [rcx+1200h], eax
 * 00000001C0190349: jz      loc_1C00C9329
 * 00000001C019034F: mov     eax, 8000h
 * 00000001C0190354: or      di, ax
 * 00000001C0190357: jmp     loc_1C00C9329
 * 00000001C019035C: mov     edx, [rax+18h]
 * 00000001C019035F: mov     ecx, [rax+1Ch]
 * 00000001C0190362: call    GetWindowBorders
 * 00000001C0190367: mov     r9d, eax
 * 00000001C019036A: mov     r8d, eax
 * 00000001C019036D: mov     rdx, rsi
 * 00000001C0190370: mov     rcx, rbx
 * 00000001C0190373: call    xxxMenuBarDraw
 * 00000001C0190378: nop
 * 00000001C0190379: jmp     loc_1C00C9376
 * 00000001C019037E: mov     rcx, rbp
 * 00000001C0190381: call    cs:__imp_GreDeleteObject
 * 00000001C0190388: nop     dword ptr [rax+rax+00h]
 * 00000001C019038D: nop
 * 00000001C019038E: jmp     loc_1C00C9290
 */
